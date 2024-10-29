## Instructions
In this chapter, the `class dateType` was designed to implement the date in a program, but the member function `setDate` and the constructor do not check whether the date is valid before storing the date in the member variables. Rewrite the definitions of the function `setDate` and the constructor so that the values for the month, day, and year are checked before storing the date into the member variables. Add a member function, `isLeapYear`, to check whether a year is a leap year. Moreover, write a test program to test your class. 

Input should be format `month day year` with each separated by a space. 
Output should resemble the following:
```
Date #: month-day-year
```

An example of the program is shown below:
```text
Date 1: 3-15-2008
this is a leap year
```
If the year is a leap year, print the date and a message indicating it is a leap year, otherwise print a message indicating that it is not a leap year. 

The header file for the `class` `dateType` has been provided for you.

