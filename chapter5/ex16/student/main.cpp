//Flag-controlled while loop.
//Number guessing game.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    int num; //variable to store the random number
    int guess; //variable to store the number guessed by the user
    bool isGuessed; //boolean variable to control the loop
    
    srand(time(0));
    num = rand() % 100;
    
    isGuessed = false;
    
    while (!isGuessed)
    {
        cout << "Enter an integer greater"
             << " than or equal to 0 and "
             << "less than 100: ";
        
        cin >> guess;
        cout << endl;

        if (guess == num)
        {
            cout << "You guessed the correct "
                 << "number." << endl;
            isGuessed = true;
        }
        else if (guess < num)
            cout << "Your guess is lower than the "
                 << "number.\n Guess again!"
                 << endl;
        else
            cout << "Your guess is higher than "
                 << "the number.\n Guess again!"
                 << endl;
    } //end while
    return 0;
}