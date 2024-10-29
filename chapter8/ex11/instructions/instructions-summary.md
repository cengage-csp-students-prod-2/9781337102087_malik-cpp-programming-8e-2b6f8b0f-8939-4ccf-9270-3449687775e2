## Instructions
** (Adding Large Integers)** | In C++, the largest `int` value is **2147483647**. So, an integer larger than this cannot be stored and processed as an integer. Similarly, if the sum or product of two positive integers is greater than **2147483647**, the result will be incorrect. One way to store and manipulate large integers is to store each individual digit of the number in an array. 

Write a program that inputs two positive integers of, at most, 20 digits and outputs the sum of the numbers. If the sum of the numbers has more than 20 digits, output the sum with the message **The sum of the numbers overflows**.

Your program must, at least, contain a function to read and store a number into an array and another function to output the sum of the numbers.  
(_Hint_: Read numbers as strings and store the digits of the number in the reverse order.) 
