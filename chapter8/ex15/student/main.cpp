 /* 
   10 17 23 65 34 6 18 27 35 110 75 25 100 24 19 67 45 88 70 96 41 36 72 150 125 25 77 
   200 90 166 139 55 31 8 29 119 126 137 34 62 135 121 108 197 45 35 24 1 16 43
   */
#include <iostream>

using namespace std;

const int LIST_SIZE = 50;

int main()
{
    int list[50];

    cout << "Enter " << LIST_SIZE << " integers: ";
    for (int i = 0; i < LIST_SIZE; i++)
        cin >> list[i];
    cout << endl;

    for (int i = 0; i < LIST_SIZE; i++)
    {
        cout << "list[" << i << "] = " << list[i] << " is the sum of: ";
        for (int j = 0; j < LIST_SIZE; j++)
            for (int k = j + 1; k < LIST_SIZE; k++)
                if (list[i] == list[j] + list[k])
                    cout << "list[" << j << "], list[" << k << "]; ";
        cout << endl;
        cout << "----------------------" << endl;;
    }

    return 0;
}