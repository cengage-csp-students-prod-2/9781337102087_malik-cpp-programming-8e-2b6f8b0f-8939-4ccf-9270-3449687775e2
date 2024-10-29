## Instructions##

In the Programming Example, *Converting a Number from Decimal to Binary*, given in this chapter, you learned how to convert a decimal number into the equivalent binary number. Two more number systems, octal (base 8) and hexadecimal (base 16), are of interest to computer scientists. In fact, in C++, you can instruct the computer to store a number in octal or hexadecimal. (Appendix C describes these number systems.) 

The digits in the octal number system are 0, 1, 2, 3, 4, 5, 6, and 7. The digits in the hexadecimal number system are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, *A, B, C, D, E*, and *F*. So *A* in hexadecimal is 10 in decimal, *B* in hexadecimal is 11 in decimal, and so on. 

The algorithm to convert a positive decimal number into an equivalent number in octal (or hexadecimal) is the same as discussed for binary numbers. Here, we divide the decimal number by 8 (for octal) and by 16 (for hexadecimal). Suppose a <sub>b</sub> represents the number *a* to the base *b*. For example, 75 <sub>10</sub> means 75 to the base 10  (that is decimal), and 83<sub>16</sub> means 83 to the base 16 (that is, hexadecimal). Then 753<sub>10</sub> = 1361<sub>8</sub> and 753<sub>10</sub> = 2F1<sub>16</sub>. 

Write a program that uses a recursive function to convert a number in decimal to base 8 or base 16. 

Your program should prompt the user for an integer and then for either `8` for base 8 conversion or `16` for base 16 conversion and output the conversion to the console. 

