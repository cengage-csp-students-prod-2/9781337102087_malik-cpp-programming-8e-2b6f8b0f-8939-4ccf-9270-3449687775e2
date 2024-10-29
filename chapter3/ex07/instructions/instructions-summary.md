## Summary
Interest on a credit card’s unpaid balance is calculated using the average daily balance.

Suppose that `netBalance` is the balance shown in the bill, `payment` is the payment made, `d1` is the number of days in the billing cycle, and `d2` is the number of days payment is made before billing cycle.

Then, the average daily balance is: 
```cpp
averageDailyBalance = (netBalance * d1 – payment * d2) / d1
```
If the interest rate per month is, say, **0.0152**, then the interest on the unpaid balance is:
```cpp
interest = averageDailyBalance * 0.0152 
```
## Instructions
Write a program that accepts as input `netBalance`, `d1`, `payment`, `d2`, and interest rate per month (`interestRate`). 

The program outputs the interest.

Format your output to two decimal places.

