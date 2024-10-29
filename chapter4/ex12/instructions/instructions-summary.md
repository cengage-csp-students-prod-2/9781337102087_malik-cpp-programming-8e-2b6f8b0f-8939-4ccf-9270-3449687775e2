## Instructions
Write a program that implements the algorithm that you designed in *Exercise 34* of this chapter (*Chapter 4*). The instructions to *Exercise 34* have been posted below for your convenience.

### Exercise 34 ###
Suppose that `billingAmount` is a `double` variable, which denotes the amount you need to pay to the department store. If you pay the full amount, you get **$10.00** or **1%** of the `billingAmount`, whichever is smaller, as a credit on your next bill; If you pay at least **50%** of the `billingAmount`, the penalty is **5%** of the balance; If you pay at least **20%** of the `billingAmount` and less than **50%** of the `billingAmount`, the penalty is **10%** of the balance; otherwise the penalty is **20%** of the balance. Design an algorithm that prompts the user to enter the billing amount and the desired payment. The algorithm then calculates and outputs the credit or the remaining balance. If the amount is not paid in full, the algorithm should also output the penalty amount.

Examples of the program are shown below:  
```
Enter the billing amount: 100000

Enter the payment amount: 18000

The penalty added to the next bill is: $16400.00
The unpaid balance including the penalty is: $98400
```
```
Enter the billing amount: 10000

Enter the payment amount: 10000

Thank you for paying the full amount.
You will receive $10.00 credit on your next bill.
```

> Since your program handles currency, make sure to use a data type that can store decimals with a precision to 2 decimals.