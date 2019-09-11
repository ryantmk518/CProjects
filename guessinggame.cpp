#include <iostream>
//Guessing Game. Random number is given, and user tries to guess the number.

using namespace std;

int main()
{
  srand(time(NULL)); 
  bool start = true; //Game start
  while (start == true) { //If player does not select do not play again
    int input = 0; // Initialize variables
    start = false;
    int guesses = 1;
    bool play = true;
    int random = (rand()%1000) +1; // Selects a random number between 1 and 1000
    char again = 'n'; 
    while (play == true) { //When the game is still going
      cout << "Enter a noooomber between 1 and 1000" << endl; 
      cin >> input; //Get input
      if (input == random) {
	cout << "You guessed the right number in " << guesses << " tries!" << endl;
	cout << "Play again? y/n" << endl; 
	cin >> again; 
	if (again == 'y') { //If player wants to play again
          play = false;
	  start = true;
	}
	else { //If player does not want to play again
	  play = false;
	  start = false;
	}
      }
      if (input > random) { //If the number is too big
	cout << "Too high! Try again!" << endl;
	play = true;
	guesses++;
      }
      if (input < random) { //If the number is too small
        cout << "Too low! Try again!" << endl;
	play = true;
	guesses++;
      }
    }
  }
  return 0;
      
 
}
