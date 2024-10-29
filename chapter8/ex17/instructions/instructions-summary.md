## Instructions
A company hired 10 temporary workers who are paid hourly and you are given a data file that contains the last name of the employees, the number of hours each employee worked in a week, and the hourly pay rate of each employee. You are asked to write a program that computes each employee’s weekly pay and the average salary of all employees. The program then outputs the weekly pay of each employee, the average weekly pay, and the names of all the employees whose pay is greater than or equal to the average pay. If the number of hours worked in a week is more than 40, then the pay rate for the hours over 40 is 1.5 times the regular hourly rate. 

Use two parallel arrays: 
* a one-dimensional array to store the names of all the employees (**Name**)
* a two-dimensional array of 10 rows and 3 columns to store the number of hours an employee worked in a week (**Hrs Worked**), the hourly pay rate (**Pay Rate**), and the weekly pay (**Salary**). 

Your program must contain at least the following functions:
* a function to read the data from the file into the arrays.
* a function to determine the weekly pay.
* a function to output each employee’s data. 
* a function to output the average salary of all employees
* a function to output the names of all the employees whose pay is greater than or equal to the average weekly pay

A sample output is:

| Name | Hrs Worked | Pay Rate | Salary |
| :-------- | ---------: | ------: | --------: |
| Johnson | 60.00 | 12.50| 875.00 |
| Aniston| 65.00 | 13.25 | 1026.88 |
| Cooper | 50.00 | 14.50 | 797.50 |
| ... | ... | ... | ... |

| |
| :-------------: |
| **Average Salary:** $947.88 |
| **Salary Greater than Avg:** |
| Aniston Gupta Kennedy ... |

