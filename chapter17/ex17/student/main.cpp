  
#include <iostream>
#include <string> 

#include "unorderedLinkedList.h"
 
using namespace std;  

bool isVowel(char ch);
void pigLatinString(unorderedLinkedList<char>& pStr);

int main()
{
	unorderedLinkedList<char> list;

    string word;

    cout << "Enter a string: ";										 
	cin >> word;
    cout << endl;

    for (int i = 0; i < word.length(); i++)								 
		list.insertLast(word[i]);						 

    cout << "The string you entered is: " << word << endl;

    pigLatinString(list);

    linkedListIterator<char> it;

    cout << "The pit Latin form of the string: ";

    for (it = list.begin(); it != list.end(); ++it)
        cout << *it;  
    cout << endl;

	return 0;					
}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U': 
    case 'Y':
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': 
    case 'y': 
        return true;
    default: 
        return false;
    }
}

void pigLatinString(unorderedLinkedList<char>& pStr)
{
    string::size_type len;

    bool foundVowel;
	
    string::size_type counter;

    if (isVowel(pStr.front()))
    {
        pStr.insertLast('-');
        pStr.insertLast('w');
        pStr.insertLast('a');
        pStr.insertLast('y');
    }
    else  
    {
        pStr.insertLast('-');
        pStr.rotate();

        len = pStr.length();

        foundVowel = false;

        for (counter = 1; counter < len - 1; 
                          counter++)
            if (isVowel(pStr.front()))
            {
                foundVowel = true;
                break;
            }
            else 
                pStr.rotate();

        if (!foundVowel)
        {
            pStr.deleteNode('-');
            pStr.insertLast('-');
            pStr.insertLast('w');
            pStr.insertLast('a');
            pStr.insertLast('y');
        }
            // pStr = pStr.substr(1, len) + "-way";
        else
        {
            pStr.insertLast('a');
            pStr.insertLast('y');
        }
    }
}