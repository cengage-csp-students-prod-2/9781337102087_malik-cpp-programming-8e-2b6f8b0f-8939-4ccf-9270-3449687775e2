## Summary
Let *n = a<sub>k</sub>a<sub>k-1</sub>a<sub>k-2</sub>...a<sub>1</sub>a<sub>0</sub>* be an integer and *t = a<sub>0</sub> - a<sub>1</sub> + a<sub>2</sub> - ... + (-1)<sup>k</sup> a<sub>k</sub>*.

It is known that *n* is divisible by **11** if and only if *t* is divisible by **11**. 

For example, suppose that *n* = **8784204**. Then *t* = 4 - 0 + 2 - 4 + 8 - 7 + 8 = **11**. 

* Because **11** is divisible by **11**, it follows that **8784204** is divisible by **11**. 

If *n* = **54063297**, then *t* = 7 - 9 + 2 - 3 + 6 - 0 + 4 - 5 = **2**. 

* Because **2** is not divisible by **11**, **54063297** is not divisible by **11**. 

## Instructions
Write a program that prompts the user to enter a positive integer and then uses this criterion to determine whether the number is divisible by **11**.

Example output (Program output should be in a similar format):
```
121 is divisible by 11
```
```
12 is not divisible by 11
```

