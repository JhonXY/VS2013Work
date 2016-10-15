#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	enum fields{WORD,HINT,NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS]=
	{
		{"wall","DO you feel you'rebanging your head against something?"},
		{ "glasses", "These might help you see the answer." },
		{ "labored", "Going slowly,is it?" },
		{ "persistent", "keep at it" },
		{ "jumble", "It is what the game is all about." }
	};
	enum difficulty{easy,mid,hard,end};
	cout << "There are " << end << "difficulty levels."<<endl;
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];
	
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	cout << "\t\t\tWelecom!\n\n";
	cout << "Unscramble.\n";
	cout << "Enter 'hint'for hint.\n";
	cout << "Enter 'quit'to quit,\n";
	cout << "The jumble is :" << jumble;
	string guess;
	cout << "\n\nYour guess:";
	cin >> guess;
	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
		}
		else
		{
			cout << "Sorry not.";
		}
		cout << "\n\nYou guess:";
		cin >> guess;
	}
	if (guess == theWord)
	{
		cout << "\nThat's it !";
	}
	cout << "\nThanks for playing.\n";
	system("pause");
	return 0;
}
