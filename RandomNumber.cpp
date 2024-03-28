#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Ganarate random number 
	srand(time(NULL));
	
	// Get a random number between 0 and 99
        unsigned int numberToGuess = rand() % 100;
        cout << "Guess a number between 0 and 99" << endl;
        unsigned int playersNumber {};
        cin >> playersNumber;
        cout << "You guessed: "
                << playersNumber
                << " The actual number was: "
                << numberToGuess
                << endl;
	
	return 0;
}
