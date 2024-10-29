## Summary
Suppose that the first number of a sequence is *x*, where *x* is an integer. 

Define:
* *a<sub>0</sub> = x*; *a<sub>n+1</sub> = a<sub>n</sub> / 2* if *a<sub>n</sub>* is even;
* *a<sub>n+1</sub> = 3 X a<sub>n</sub> + 1* if *a<sub>n</sub>* is odd. 

Then there exists an integer *k* such that *a<sub>k</sub> = 1*. 

## Instructions
Write a program that prompts the user to input the value of *x*. 

The program outputs:
1. The numbers *a<sub>0</sub>*, *a<sub>1</sub>*, *a<sub>2</sub>*, . . . , *a<sub>k</sub>*. 
2. The integer *k* such that *a<sub>k</sub> = 1*

(For example, if *x = 75*, then *k = 14*, and the numbers *a<sub>0</sub>*, *a<sub>1</sub>*, *a<sub>2</sub>*, ..., *a<sub>14</sub>*, respectively, are **75**, **226**, **113**, **340**, **170**, **85**, **256**, **128**, **64**, **32**, **16**, **8**, **4**, **2**, **1**.) 

Test your program for the following values of *x*: **75**, **111**, **678**, **732**, **873**, **2048**, and **65535**.

