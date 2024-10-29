## Instructions
Write a program that prompts the user to enter 50 integers and stores them in an array. The program then determines and outputs which numbers in the array are sum of two other array elements. If an array element is the sum of two other array elements, then for this array element, the program should output all such pairs separated by a ';'. 

An example of the program is shown below: 
```text
list[0] = 15 is the sum of: 
----------------------
list[1] = 25 is the sum of: list[5], list[14]; list[13], list[47]; list[46], list[47]; 
----------------------
list[2] = 23 is the sum of: list[0], list[33]; 
----------------------
list[3] = 65 is the sum of: list[4], list[32]; list[13], list[20]; list[20], list[46]; list[21], list[34]; list[32], list[38]; 
----------------------
list[4] = 34 is the sum of: list[0], list[14]; list[6], list[48]; 
----------------------
list[5] = 6 is the sum of: 
...
```

If no two elements can equal the value of an element, the line can remain empty, as shown above for `list[0]` and `list[5]`. 

