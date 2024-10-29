## Instructions ##
The function `sqrt` from the header file `cmath` can be used to find the square root of a nonnegative real number. Using Newton’s method, you can also write an algorithm to find the square root of a nonnegative real number within a given tolerance as follows: 
Suppose *x* is a nonnegative real number, *a* is the approximate square root of *x*, and *epsilon* is the tolerance. Start with a = x, 

1. If |a<sup>2</sup> - x| &#8804; *epsilon*, then *a* is the square root of *x* within the tolerance; otherwise:
2. Replace *a* with (a<sup>2</sup> + x)/(2a) and repeat step 1, 

where |a<sup>2</sup> - x| denotes the absolute of a<sup>2</sup> - x. 

Write a recursive function to implement this algorithm to find the square root of a nonnegative real number. 

Also, write a program to test your function. Your program should prompt the user for a number and output the result to the console. 

