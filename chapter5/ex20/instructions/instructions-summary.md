## Summary
When you borrow money to buy a house, a car, or for some other purpose, you repay the loan by making periodic payments over a certain period of time. 

Of course, the lending company will charge interest on the loan. Every periodic payment consists of the interest on the loan and the payment toward the principal amount. 

To be specific, suppose that you borrow **$1,000** at an interest rate of **7.2%** per year and the payments are monthly. Suppose that your monthly payment is **$25**. Now, the interest is **7.2%** per year and the payments are monthly, so the interest rate per month is *7.2/12* = **0.6%**. The first month’s interest on **$1,000** is *1000 X 0.006* = **6**. 

Because the payment is **$25** and the interest for the first month is **$6**, the payment toward the principal amount is *25 - 6* = **19**. This means after making the first payment, the loan amount is *1,000 - 19* = **981**. 

For the second payment, the interest is calculated on **$981**. So the interest for the second month is *981 X 0.006* = **5.886**, that is, approximately **$5.89**. This implies that the payment toward the principal is *25 - 5.89* = **19.11** and the remaining balance after the second payment is *981 - 19.11* = **961.89**. This process is repeated until the loan is paid. 

## Instructions
Write a program that accepts as input:
1. The loan amount
2. The interest rate per year
3. The monthly payment. 

(Enter the interest rate as a percentage. For example, if the interest rate is 7.2% per year, then enter 7.2.) 

The program then outputs the number of months it would take to repay the loan. 

(Note that if the monthly payment is less than the first month’s interest, then after each payment, the loan amount will increase.)

In this case, the program must warn the borrower that the **Monthly payment is too low. The loan cannot be repaid.**

> Since your program handles currency, make sure to use a data type that can store decimals with a decimal precision of 2.

