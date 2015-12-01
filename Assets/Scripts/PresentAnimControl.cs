using UnityEngine;
using System.Collections;

public class PresentAnimControl : MonoBehaviour {

	public Animator leftPresent;
	public Animator centerPresent;
	public Animator rightPresent;

	// State and transition names
	const string k_TransitionName = "Done";
	const string k_OutStateName		= "Out";

	private int m_InParameterId;

	public void OnEnable() {
		// Required to feed Animator.SetBool
		m_InParameterId = Animator.StringToHash(k_TransitionName);
	}

	public void presentNew() {
		leftPresent.SetBool(m_InParameterId, true);
		centerPresent.SetBool(m_InParameterId, true);
		rightPresent.SetBool(m_InParameterId, true);
		StartCoroutine(waitUntilAnimFinished());
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
}
