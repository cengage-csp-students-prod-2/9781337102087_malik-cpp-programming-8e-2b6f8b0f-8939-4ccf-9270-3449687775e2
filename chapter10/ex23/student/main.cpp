#include <iostream>
#include <iomanip>
#include "die.h" 

using namespace std;

int num_of_dice = 4;
const int STAR_POINTS = 5; //number of points represented by each star

void printBarGraph(int list[], int length);

int main()    
{   
    cout << "Enter the number of dice to be rolled: " << endl;
    cin >> num_of_dice;
    
    die numOfDice[num_of_dice];
    int sumDieNumCount[5 * num_of_dice + 1] = {0};
    int numOfRolls;
    int sum;

    int sumArrayLength = 5 * num_of_dice + 1;
    
    cout << "Enter the number of times the " << num_of_dice
         << " dice to be rolled: ";
    cin >> numOfRolls;
    cout << endl;

    for (int i = 1; i <= numOfRolls; i++)
    {
        sum = 0;
        for (int j = 0; j < num_of_dice; j++)
        {
            numOfDice[j].roll();
            sum = sum + numOfDice[j].getNum();
        }

        sumDieNumCount[sum - num_of_dice]++;
    }

    cout << "Sum count:-----" << endl;
    cout << "Sum    count" << endl;

    for (int i = 0; i < sumArrayLength; i++)
        cout << setw(3) << (i + num_of_dice) << "    " 
             << setw(4) << sumDieNumCount[i] << endl;

    cout << endl;

    printBarGraph(sumDieNumCount, sumArrayLength);
    cout << endl;

    return 0;   
}

void printBarGraph(int list[], int length)
{
    int stars;

    for (int i = 0; i < length; i++)
    {
        stars = list[i] / STAR_POINTS;    //every star represents STAR_POINTS
        cout << setw(3) << (i + num_of_dice) << "  ";
        for (int j = 0; j < stars; j++)
            cout << "*";
        cout << endl;
    }
}
 