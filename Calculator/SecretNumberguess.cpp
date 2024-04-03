//SecretNumberguess.cpp
#include "SecretNumberguess.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

SecretNumberguess::SecretNumberguess() {

}

void SecretNumberguess::guessgame() {

	int playerdecision; // input by user 
	int leveldiffculty; // ask user for diffculty level
	int maxAttempts; // sets max attmepts that the user can guess, this will depend on the level 
	int secretnumber; // value of secret number
	int attemptsmade; // records how many  were attempts made

	cout << "Welcome to guess the number game!" << endl;
	cout << "your objective is to guess the number " << endl;
	cout << " between 1 and 100." << endl;
	cout << " you'll have a limited amount of tries" << endl;
	cout << " depending on the level you choose." << endl;
	cout << " Good Luck!" << endl;
	cout << "____________________________________________" << endl;
	// game description and rules 

	while (true)
	{
		cout << " Enter the difficulty level: " << endl;
		cout << " 1. easy " << endl; // 10 guesses with assists
		cout << " 2. medium " << endl; // 8 guesses with assists
		cout << " 3. hard " << endl; // 6 guesses with assists
		cout << " 4. extreme" << endl; // 4 guesses with assists
		cout << " 5. insane " << endl; // 2 guesses with assists
		cout << " 6. impossible " << endl; // 2 guesses with no assists
		cout << " 0. exit game " << endl;
		// menu 

		cout << " enter number for diffculty" << endl;
		cin >> leveldiffculty;
		// ask user for diffculty level 

		srand(time(0));
		secretnumber = rand() % 100 + 1;
		attemptsmade = 0;

		// first level (easy)
		if (leveldiffculty == 1)
		{
			cout << " you will be given 10 tries to guess the " << endl;
			cout << " secret number between 1 and 100 " << endl;
			maxAttempts = 10;

			for (int i = 0; i <= maxAttempts; i++)
			{
				cout << "please enter a number" << endl;
				cin >> playerdecision;
				if (playerdecision == secretnumber)
				{
					cout << "congratulations, you guessed the correct number! " << endl;
					cout << " the number was " << secretnumber << ". " << endl;
					cout << " since you completed this level, why not try the medium level" << endl;
					break;
				}
				else {
					cout << "sorry, the number you guessed was incorrect" << endl;
					cout << " please try again! " << endl;
					if (playerdecision > secretnumber)
					{
						cout << " your guess is greater then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
					else
					{
						cout << " your guess is less then the secret number " << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}

				}
			}

		}
		// second level (medium)
		else if (leveldiffculty == 2)
		{
			cout << " you will be given 8 tries to guess the " << endl;
			cout << " secret number between 1 and 100 " << endl;
			maxAttempts = 8;

			for (int i = 0; i <= maxAttempts; i++)
			{
				cout << " please enter a number" << endl;
				cin >> playerdecision;
				if (playerdecision == secretnumber)
				{
					cout << "congratulations, you guessed the correct number! " << endl;
					cout << " the number was " << secretnumber << ". " << endl;
					cout << " since you completed this level, why not try the hard level" << endl;
					break;

				}
				else
				{
					cout << "sorry, the number you guessed was incorrect" << endl;
					cout << " please try again! " << endl;
					if (playerdecision > secretnumber)
					{
						cout << " your guess is greater then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
					else
					{
						cout << " your guess is less then the secret number " << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
				}
			}

		}
		// third level (hard)
		else if (leveldiffculty == 3)
		{
			cout << " you will be given 6 tries to guess the " << endl;
			cout << " secret number between 1 and 100 " << endl;
			maxAttempts = 6;

			for (int i = 0; i <= maxAttempts; i++)
			{
				cout << " please enter a number" << endl;
				cin >> playerdecision;
				if (playerdecision == secretnumber)
				{
					cout << "congratulations, you guessed the correct number! " << endl;
					cout << " the number was " << secretnumber << ". " << endl;
					cout << " since you completed this level, why not try the extreme level" << endl;
					break;

				}
				else
				{
					cout << " sorry, the number you guessed was incorrect" << endl;
					cout << " please try again! " << endl;
					if (playerdecision > secretnumber)
					{
						cout << " your guess is greater then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
					else
					{
						cout << " your guess is less then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
				}
			}


		}
		else if (leveldiffculty == 4)// fourth level extreme
		{
			cout << "you will be given 4 tries to guess the " << endl;
			cout << " secret number between 1 and 100 " << endl;
			maxAttempts = 4;

			for (int i = 0; i <= maxAttempts; i++)
			{
				cout << " please enter a number " << endl;
				cin >> playerdecision;
				if (playerdecision == secretnumber)
				{
					cout << "congratulations, you guessed the correct number! " << endl;
					cout << " the number was " << secretnumber << ". " << endl;
					cout << " since you completed this level, why not try the insane level" << endl;
					break;
				}
				else
				{
					cout << " sorry, the number you guessed was incorrect" << endl;
					cout << " please try again! " << endl;
					if (playerdecision > secretnumber)
					{
						cout << " your guess is greater then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
					else
					{
						cout << " your guess is less then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
				}
			}
		}
		else if (leveldiffculty == 5) //5th level insane
		{
			cout << "you will be given 2 tries to guess the " << endl;
			cout << " secret number between 1 and 100 " << endl;
			maxAttempts = 2;

			for (int i = 0; i <= maxAttempts; i++)
			{
				cout << " please enter a number" << endl;
				cin >> playerdecision;
				if (playerdecision == secretnumber)
				{
					cout << "congratulations, you guessed the correct number! " << endl;
					cout << " the number was " << secretnumber << ". " << endl;
					cout << " since you completed this level, why not try the impossible level" << endl;
					break;

				}
				else
				{
					cout << " sorry, the number you guessed was incorrect" << endl;
					cout << " please try again! " << endl;
					if (playerdecision > secretnumber)
					{
						cout << " your guess is greater then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
					else
					{
						cout << " your guess is less then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
				}
			}
		}
		else if (leveldiffculty == 6) // sixth level (last level)
		{
			cout << "you will be given 2 tries to guess the " << endl;
			cout << " secret number between 1 and 100 " << endl;
			cout << " with no hints " << endl;
			cout << " good Luck!!" << endl;
			maxAttempts = 2;

			for (int i = 0; i < maxAttempts; i++)
			{
				cout << " please enter a number " << endl;
				cin >> playerdecision;
				if (playerdecision == secretnumber)
				{
					cout << "congratulations, you guessed the correct number! " << endl;
					cout << " the number was " << secretnumber << ". " << endl;
					break;
				}
				else
				{
					cout << " sorry, the number you guessed was incorrect" << endl;
					cout << " please try again! " << endl;
					if (playerdecision > secretnumber)
					{
						cout << " your guess is greater then the secret number" << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
					else
					{
						cout << " your guess is less then the secret number " << endl;
						maxAttempts--;
						cout << maxAttempts << " guesses left " << endl;
						if (maxAttempts == 0)
						{
							cout << " unfortunately, you have ran out of guesses" << endl;
							cout << " the secret number was " << secretnumber << endl;
							cout << " better luck next time!" << endl;
						}
					}
				}
			}


		}
		else if (leveldiffculty == 0)
		{
			exit(0);
		}
		else
		{
			cout << " number chosen is out of range" << endl;
			cout << " Please enter a valid number in order " << endl;
			cout << " to play the game. (0,1,2,3,4,5,6" << endl;
		}
	}

}

SecretNumberguess::~SecretNumberguess()
{


}