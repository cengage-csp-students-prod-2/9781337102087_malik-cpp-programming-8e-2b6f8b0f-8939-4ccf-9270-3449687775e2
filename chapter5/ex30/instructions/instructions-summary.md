## Summary
Let *n* be an integer. The value of the expression: `$\lim_{(x\rightarrow\infty)}(1 + \frac{1}{n})^n$`

is written as *e*.  This number *e* appears in many places in mathematics.

For example, it appears in the formula *A = Pe<sup>rt</sup>* to compute the total amount accumulated when the interest is compounded continuously. 

It also appears in problems relating to exponential growth and decay. It is known that *e* is an irrational number. 

The value of *e* to nine decimal places is *e* = **2.718281827**. 

## Instructions
Write a program that computes the value of the expression:
`$\lim_{(x\rightarrow\infty)}(1 + \frac{1}{n})^n$`

between certain values of *n* and then compare the values with *e*. 

For example, you can compute the values of the expression between:
* **100** and **10,000** with an increment of **100**
* or between **1,000** and **1,000,000** with an increment of **1,000**.

The program should accept as input:
1. The start value for *n*
2. The end value for *n*

(Note: The increment value of **100** should be hardcoded in the program upon final submission.)

The program should then output the value of the expression for each value of *n* in the specified range with a decimal precision of 8. 

>If you decide to format your output with `setw`, use a value of at least 15 to ensure that your outputs don't get mashed together!

