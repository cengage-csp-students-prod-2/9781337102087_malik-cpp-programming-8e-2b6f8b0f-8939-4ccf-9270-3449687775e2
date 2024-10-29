## Instructions ##

*Example 15-2* gives the recursive algorithm to determine the Fibonacci number of a sequence. Figure 15-5 (below) shows the execution of the expression `rFibNum(2, 3, 5)`. It is evident from this figure that to determine the fifth Fibonacci number of the sequence, the expression `rFibNum(2, 3, 2)` was evaluated more than once. Thus, in general, to determine a Fibonacci number some of the numbers in the Fibonacci sequence will be calculated more than once, which will result in wasting computer time and slow execution of the function. One way to prevent the recalculation of a Fibonacci number is to store it into an array. Modify the function `rFibNum` so that it uses an array, passed as a parameter, to store the Fibonacci numbers and prevents the recalculation of a Fibonacci number. Your modified definition must be recursive.

#### **Figure 15-5** ####

```
Enter the first Fibonacci number: 2

Enter the second Fibonacci number: 5

Enter the position of the desired Fibonacci number: 7

The Fibonacci number at position 7 is: 50

```

