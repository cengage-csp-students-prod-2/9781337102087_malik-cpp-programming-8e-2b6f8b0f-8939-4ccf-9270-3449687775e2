## Instructions
In this exercise, you are to modify the *Classify Numbers* programming example from this chapter. 

As written, the program inputs the data from the standard input device (keyboard) and outputs the results on the standard output device (screen). The program can process only 20 numbers. 

Rewrite the program to incorporate the following requirements:
* Data to the program is input from a file of an unspecified length; that is, the program does not know in advance how many numbers are in the file.
* Save the output of the program in a file.
* Modify the function `getNumber` so that it reads a number from the input file (opened in the function `main`), outputs the number to the output file (opened in the function `main`), and sends the number read to the function `main`. Print only 10 numbers per line.
* Have the program find the sum and average of the numbers.
* Modify the function `printResult` so that it outputs the final results to the output file (opened in the function `main`). Other than outputting the appropriate counts, this new definition of the function `printResult` should also output the sum and average of the numbers on their own line. 

An example of the program's output file is shown below: 
```text
143 11 286 37 173 234 -265 -286 85 186 
267 266 62 -139 -3 80 -225 10 141 142 
166 241 -26 3 -167 76 169 31 -27 167 
17 -65 77 -32 13 265 46 245 -261 22 

The sum of numbers = 2165
The average is 54
```

