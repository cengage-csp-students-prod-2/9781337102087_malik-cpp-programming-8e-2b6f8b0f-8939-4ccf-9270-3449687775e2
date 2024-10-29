## Instructions
Jason opened a coffee shop at the beach and sells coffee in three sizes:  
small (9 oz),  
medium (12 oz),  
and large (15 oz).  

The cost of one small cup is $1.75, one medium cup is $1.90, and one large cup is $2.00. 

Write a menu-driven program that will make the coffee shop operational. Your program should allow the user to do the following:
* Buy coffee in any size and in any number of cups;
* At any time show the total number of cups of each size sold.
* At any time show the total amount of coffee sold.
* At any time show the total money made.

Your program should consist of at least the following functions: 
* a function to show the user how to use the program;
* a function to sell coffee which displays the total being displayed as "Please Pay $X.XX";
* a function to show the number of cups of each size sold as 
"Small cup count XX 
Medium cup count XX
Large cup count XX";
* a function to show the total amount of coffee sold as "XXoz";
* and a function to show the total money made as "Total Money Made $X.XX"

Your program should not use any global variables and special values such as coffee cup sizes and cost of a coffee cup must be declared as named constants.

Below is an example of the expected user interaction.

> Since your program handles currency, make sure to use a data type that can store decimals with a decimal precision of 2. 

*(Note that not all of the required functionality is used in this example.)*
```
1: Enter 1 to order coffee.
2: Enter 2 to check the total money made up to this time.
3: Enter 3 to check the total amount of coffee sold up to this time.
4: Enter 4 to check the number of cups of coffee of each size sold.
5: Enter 5 to print the data.
9: Enter 9 to exit the program.
1

1: Enter 1 to buy coffee in a small cup size (9 oz)
2: Enter 2 to buy coffee in a medium cup size (12 oz)
3: Enter 3 to buy coffee in a large cup size (15 oz)
9: Enter 9 to exit.
1

Enter the number of cups: 1

1: Enter 1 to buy coffee in a small cup size (9 oz)
2: Enter 2 to buy coffee in a medium cup size (12 oz)
3: Enter 3 to buy coffee in a large cup size (15 oz)
9: Enter 9 to exit.
9

Please pay $1.75
1: Enter 1 to order coffee.
2: Enter 2 to check the total money made up to this time.
3: Enter 3 to check the total amount of coffee sold up to this time.
4: Enter 4 to check the number of cups of coffee of each size sold.
5: Enter 5 to print the data.
9: Enter 9 to exit the program.
9
```