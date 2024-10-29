#include <iostream>
#include <cmath> 
 
using namespace std;

const int SIZE = 1230;

bool isPrime(int number);
void first1230PrimeNum(int list[], int length);
void primeTest(int num, int list[], int length);
 
int main ()
{	
	int primeList[SIZE];
    int number;

    first1230PrimeNum(primeList, SIZE);

    cout << "Enter an integer between 2 and 100,000,000: " ;
    cin >> number;
    cout << endl;

    primeTest(number, primeList, SIZE);

	return 0;
}

void primeTest(int num, int list[], int length)
{
    int limit = static_cast<int>(sqrt(num * 1.0));

 //   cout << "Limit: " << limit << endl;

    for (int i = 0; i < length; i++)
    {
        if (num == list[i])
        {
            cout << num << " is a prime number!" << endl;
            break;
        }
        else if (list[i] <= limit && num % list[i] == 0)
        {
            cout << num << " is not a prime number" << endl;
            cout << "One of its divisor is: " << list[i] << endl;
            break;
        }
        else if (list[i] > limit)
        {
            cout << num << " is a prime number" << endl;
            break;
        }
    }
}

void first1230PrimeNum(int list[], int length)
{
    list[0] = 2;
    int count = 1;
    int num = 3;

    while (count < SIZE)
    {
        if (isPrime(num))
            list[count++] = num;
        num = num + 2;
    }
}

bool isPrime(int number)
{
	bool isPrimeNum = true;
	int sqrtNum;
	int divisor = 3;

    if (number == 2)
        isPrimeNum = true;
    else if (number % 2 == 0)
        isPrimeNum = false;
    else
    {
        sqrtNum = static_cast<int> (sqrt(static_cast<double>(number)));

        while (divisor <= sqrtNum)
        {
            if (number % divisor == 0)
            {
                isPrimeNum = false;
                break;
            }
            else
                divisor = divisor + 2;
        }
    }

    return isPrimeNum;
}