using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PresentAnimControl : MonoBehaviour {

	public PresentationController controller;
	public float timerStartVal = 20f;
	private float timer;

	public Animator leftPresent;
	public Animator centerPresent;
	public Animator rightPresent;

	public GameObject TimerBarPanel;
	public InputField answerField;

	// State and transition names
	const string k_TransitionName	= "Done";
	const string k_OutStateName		= "Out";

	private int m_InParameterId;
	private bool taskFinished = false;


	void Start() {
		timer = timerStartVal;
		presentNew();
	}



	public void OnEnable() {
		// Required to feed Animator.SetBool
		m_InParameterId = Animator.StringToHash(k_TransitionName);
	}

	public void submit() {
		grabAnswer();
		controller.recordToArray(0.0f);
		presentNew();
	}

	public void presentNew() {
		leftPresent.SetBool(m_InParameterId, true);
		centerPresent.SetBool(m_InParameterId, true);
		rightPresent.SetBool(m_InParameterId, true);
		StartCoroutine(waitUntilAnimFinished());
		setPresentationText();
	}

	public void grabAnswer() {
		controller.setCurrentAnswer(answerField.text);
	}

	IEnumerator waitUntilAnimFinished() {
		bool stateReached1 = false;
		bool stateReached2 = false;
		bool stateReached3 = false;
		while (!(stateReached1 && stateReached2 && stateReached3)) {
			if (!leftPresent.IsInTransition(0))
				stateReached1 = true;
			if (!centerPresent.IsInTransition(0))
				stateReached2 = true;
			if (!rightPresent.IsInTransition(0))
				stateReached3 = true;
			yield return new WaitForEndOfFrame();
		}
		leftPresent.SetBool(m_InParameterId, false);
		centerPresent.SetBool(m_InParameterId, false);
		rightPresent.SetBool(m_InParameterId, false);
	}

	void setPresentationText() {
		char[] delims = { '/' };
		string incLine = controller.getNewWords();
		Text w1 = leftPresent.GetComponentInChildren<Text>();
		Text w2 = centerPresent.GetComponentInChildren<Text>();
		Text w3 = rightPresent.GetComponentInChildren<Text>();
		Debug.Log("Received: " + incLine);
		if (incLine.Equals(@"ERROR")) {
			//End task.
			w1.text = w2.text = w3.text = "DONE"; // TODO: CHANGE
			taskFinished = true;
			controller.logRecordedEntries();

		} else {
			string[] sep = incLine.Split(delims);
			Debug.Log("W1: " + sep[0] + " / W2: " + sep[1] + " / W3: " + sep[2]);
			w1.text = sep[0];
			w2.text = sep[1];
			w3.text = sep[2];
		}
	}
}
