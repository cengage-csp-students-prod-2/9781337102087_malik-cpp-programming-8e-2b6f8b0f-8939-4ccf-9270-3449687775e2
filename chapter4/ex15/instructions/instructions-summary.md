## Instructions
Write a program to implement the algorithm that you designed in *Exercise 20* of *Chapter 1*. (Assume that the account balance is stored in the file *Ch4_Ex15_Data.txt*.) 

Instructions to *Exercise 20* of *Chapter 1* have been posted below for your convenience. 
### Exercise 20 ###

An ATM allows a customer to withdraw a maximum of $500 per day. 

If a customer withdraws more than $300, the service charge is 4% of the amount over $300. 

If the customer does not have sufficient money in the account, the ATM informs the customer about the insufficient funds and gives the customer the option to withdraw the money for a service charge of $25.00. 

If there is no money in the account or if the account balance is negative, the ATM does not allow the customer to withdraw any money. 

If the amount to be withdrawn is greater than $500, the ATM informs the customer about the maximum amount that can be withdrawn. 

Write an algorithm that allows the customer to enter the amount to be withdrawn. The algorithm then checks the total amount in the account, dispenses the money to the customer, and debits the account by the amount withdrawn and the service charges, if any.

Your program should output account balance before and after withdrawal and service charges. Also, save the account balance after withdrawal in the file *Ch4_Ex15_Output.txt*.

> Ensure the output in *Ch4_Ex15_Output.txt* is accurate to two decimal places.