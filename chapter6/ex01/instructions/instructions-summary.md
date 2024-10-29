## Instructions
Write a program that uses the function `isPalindrome` given in *Example 6-6 (Palindrome)*. Test your program on the following strings: 
```
madam, abba, 22, 67876, 444244, trymeuemyrt
```


Modify the function `isPalindrome` of *Example 6-6* so that when determining whether a string is a palindrome, cases are ignored, that is, uppercase and lowercase letters are considered the same.

The `isPalindrome` function from *Example 6-6* has been included below for your convenience. 

```c++
bool isPalindrome(string str) 
{
int length = str.length(); 
for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length – 1 – i]) {
         return false;
    } // if    
  } // for loop
 return true;
}// isPalindrome
```   

Your program should print a message indicating if a string is a palindrome:
```
madam is a palindrome
```