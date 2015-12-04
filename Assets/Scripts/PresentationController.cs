using UnityEngine;
using System.Collections;

public class PresentationController : MonoBehaviour {

	public int numberOfPresentations; // Because uint doesn't show up in the inspector

	public TextAsset VeryEasyText;
	public TextAsset EasyText;
	public TextAsset MediumText;
	public TextAsset HardText;

	private int veryEasyCount,
		easyCount,
		mediumCount,
		hardCount;

	private string[] veryEasyLines;
	private string[] easyLines;
	private string[] mediumLines;
	private string[] hardLines;

	private string[][][] dataArray;

	private int currDiff;
	private int currLineNum;
	private string currLine;
	private string currAnswer;

	// Use this for initialization
	// Awake is used because this _must_ be initialized before PresentAnimControl.
	void Awake () {
		int i,j; // Used for array init

		// Read in files, line by line.
		// We will deal with shuffling in a second and parsing each line at presentation time
		readText();
		// Shuffle the lines
			// TODO: Find a better way to use System.Random() rather than instatiating a new object every time
		System.Random generator = new System.Random();
		FisherYates(generator, veryEasyLines);
		FisherYates(generator, easyLines);
		FisherYates(generator, mediumLines);
		FisherYates(generator, hardLines);

		// Initialize Counts
		veryEasyCount = easyCount = mediumCount = hardCount = numberOfPresentations;

		// Initialize Data Array
		dataArray = new string[4][][];
		for (i = 0; i < 4; i++) {
			dataArray[i] = new string[numberOfPresentations][];
			for (j = 0; j < numberOfPresentations; j++) {
				dataArray[i][j] = new string[3];
			}
		}
	}

	// Update is called once per frame
	void Update () {
	
	}

	void readText() {
		veryEasyLines	= VeryEasyText.text.Split(new string[] { System.Environment.NewLine }, System.StringSplitOptions.None);
		easyLines		= EasyText.text.Split(new string[] { System.Environment.NewLine }, System.StringSplitOptions.None);
		mediumLines		= MediumText.text.Split(new string[] { System.Environment.NewLine }, System.StringSplitOptions.None);
		hardLines		= HardText.text.Split(new string[] { System.Environment.NewLine }, System.StringSplitOptions.None);
	}

	public void setCurrentDifficulty(int diff) {
		this.currDiff = diff;
	}

	public int getCurrentDifficulty() {
		return this.currDiff;
	}

	public void setCurrentLine(string line) {
		this.currLine = line;
	}

	public string getCurrentLine() {
		return this.currLine;
	}

	public void setCurrentAnswer(string ans) {
		this.currAnswer = ans;
	}

	public string getCurrentAnswer() {
		return this.currAnswer;
	}

	public void setCurrentLineNumber(int num) {
		this.currLineNum = num;
	}

	public int getCurrentLineNumber() {
		return this.currLineNum;
	}

	public string getNewWords() {
		// Are there presentation left of Very Easy?
		if (veryEasyCount > 0) {
			// Display Very Easy
			veryEasyCount--;
			setCurrentDifficulty(0);
			setCurrentLine(veryEasyLines[veryEasyCount]);
			setCurrentLineNumber(numberOfPresentations - veryEasyCount - 1); // Hmm...
			return veryEasyLines[veryEasyCount];
		} else if (easyCount > 0) {
			// Display Easy
			easyCount--;
			setCurrentDifficulty(1);
			setCurrentLine(easyLines[easyCount]);
			setCurrentLineNumber(numberOfPresentations - easyCount - 1);
			return easyLines[easyCount];
		} else if (mediumCount > 0) {
			// Display Medium
			mediumCount--;
			setCurrentDifficulty(2);
			setCurrentLine(mediumLines[mediumCount]);
			setCurrentLineNumber(numberOfPresentations - mediumCount - 1);
			return mediumLines[mediumCount];
		} else if (hardCount > 0) {
			// Display Hard
			hardCount--;
			setCurrentDifficulty(3);
			setCurrentLine(hardLines[hardCount]);
			setCurrentLineNumber(numberOfPresentations - hardCount - 1);
			return hardLines[hardCount];
		} else {
			// Nothing to display. Task finished.
			return @"ERROR";
		}
	}

	public void recordToArray(float responseTime) {
		dataArray[this.currDiff][this.currLineNum][0] = this.currLine;
		dataArray[this.currDiff][this.currLineNum][1] = this.currAnswer;
		dataArray[this.currDiff][this.currLineNum][2] = responseTime.ToString();
		Debug.Log("Recording data in: [" + this.currDiff + "][" + this.currLineNum + "]");
	}

	/* https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle */
	/* This is probably a bit more generic than necessary but it'll be nice to reuse someday */
	/* Provided by user `Matt Howells` at Stack Overflow */
	public static void FisherYates<T>(System.Random rng, T[] arr) {
		Debug.Log("Shuffling an array...");
		int n = arr.Length;
		while (n > 1) {
			int k = rng.Next(n--);
			T temp = arr[n];
			arr[n] = arr[k];
			arr[k] = temp;
		}
	}

	public void logRecordedEntries() {
		int i, j, k;
		for (i = 0; i < 4; i++) {
			for (j = 0; j < numberOfPresentations; j++) {
				Debug.Log("[" + i + "][" + j + "][0]:" + dataArray[i][j][0]);
				Debug.Log("[" + i + "][" + j + "][1]:" + dataArray[i][j][1]);
				Debug.Log("[" + i + "][" + j + "][2]:" + dataArray[i][j][2]);
			}
		}
	}
}
