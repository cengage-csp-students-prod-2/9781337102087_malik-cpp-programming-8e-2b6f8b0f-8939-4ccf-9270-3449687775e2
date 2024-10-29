## Instructions
Write a program that implements the algorithm given in *Example 1 - 3 (Chapter 1)*, which determines the monthly wages of a salesperson. The instructions for *Example 1 - 3* have been posted below for your convenience. 

### Example 1 - 3 ###
Every salesperson has a base salary. The salesperson also receives a bonus at the end of each month, based on the following criteria: 
a. If the salesperson has been with the store for five years or less, the bonus is $10 for each year that he or she has worked there. 
b. If the salesperson has been with the store for more than five years, the bonus is $20 for each year that he or she has worked there. 
c. The salesperson can earn an additional bonus as follows: If the total sales made by the salesperson for the month are at least $5,000 but less than $10,000, he or she receives a 3% commission on the sale. 
d. If the total sales made by the salesperson for the month are at least $10,000, he or she receives a 6% commission on the sale.

To calculate a salesperson’s monthly paycheck, you need to know the base salary, the number of years that the salesperson has been with the company, and the total sales made by the salesperson for that month. Suppose `baseSalary` denotes the base salary,`noOfServiceYears` denotes the number of years that the salesperson has been with the store,` bonus` denotes the bonus, `totalSales` denotes the total sales made by the salesperson for the month, and `additionalBonus` denotes the additional bonus.

> Since your program handles currency, make sure to use a data type that can store decimals with a precision to 2 decimals.