#include <iostream>


using namespace std;

int main()
{
  srand(time(NULL));
  bool start = true;
  while (start == true) {
    int input = 0;
    start = false;
    int guesses = 1;
    bool play = true;
    int random = (rand()%1000) +1;
    char again = 'n';
    while (play == true) {
      cout << "Enter a noooomber between 1 and 1000" << endl;
      cin >> input;
      if (input == random) {
	cout << "You guessed the right number in " << guesses << " tries!" << endl;
	cout << "Play again? y/n" << endl;
	cin >> again;
	if (again == 'y') {
          play = false;
	  start = true;
	}
	else {
	  play = false;
	  start = false;
	}
      }
      if (input > random) {
	cout << "Too high! Try again!" << endl;
	play = true;
	guesses++;
      }
      if (input < random) {
        cout << "Too low! Try again!" << endl;
	play = true;
	guesses++;
      }
    }
  }
  return 0;
      
 
}
