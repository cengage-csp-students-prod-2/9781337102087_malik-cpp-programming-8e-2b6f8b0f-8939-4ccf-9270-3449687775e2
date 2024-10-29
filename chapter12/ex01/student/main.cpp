#include <iostream>
#include <cstring> 
#include <cctype> 
  
using namespace std;

int main()
{
    char str[81];

    int len;

    int i;

    cout << "Enter a string: ";
    cin.get(str, 80);
    cout << endl;
    cout << "String in upper case letters is:" << endl;

    len = strlen(str);
    for (i = 0; i < len; i++)
        cout << static_cast<char>(toupper(str[i]));
    cout << endl;

    return 0;
}