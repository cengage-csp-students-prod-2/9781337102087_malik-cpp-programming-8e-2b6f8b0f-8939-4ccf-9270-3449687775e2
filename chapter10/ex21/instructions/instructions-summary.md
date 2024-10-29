## Instructions
Define the `class bankAccount` to implement the basic properties of a bank account. An object of this `class` should store the following data: Account holder’s name (`string`), account number (`int`), account type (`string`, checking/saving), balance (`double`), and interest rate (`double`). (Store interest rate as a decimal number.) 

Add appropriate member functions to manipulate an object. Use a `static` member in the `class` to automatically assign account numbers. 

Also, declare an array of 10 components of type `bankAccount` to process up to 10 customers and write a program to illustrate how to use your `class`.

Example output is shown below:

```
1: Enter 1 to add a new customer.                                    
2: Enter 2 for an existing customer.                                 
3: Enter 3 to print customers data.                                  
9: Enter 9 to exit the program.                                      
1                                                                    
                                                                     
Enter customer's name: Dave Brown                                    
                                                                     
Enter account type (checking/savings): checking                      
                                                                     
Enter amount to be deposited to open account: 10000                  
                                                                     
Enter interest rate (as a percent): .01                              
                                                                     
1: Enter 1 to add a new customer.                                    
2: Enter 2 for an existing customer.                                 
3: Enter 3 to print customers data.                                  
9: Enter 9 to exit the program.                                      
3                                                                    
                                                                     
Account Holder Name: Dave Brown                                      
Account Type: checking                                               
Account Number: 1100                                                 
Balance: $10000.00                                                   
Interest Rate: 0.01%                                                 
*****************************                                        
                                                                     
1: Enter 1 to add a new customer.                                    
2: Enter 2 for an existing customer.                                 
3: Enter 3 to print customers data.                                  
9: Enter 9 to exit the program.                                      
9
```

> Since your program handles currency, make sure to use a data type that can store decimals with a precision to 2 decimals.