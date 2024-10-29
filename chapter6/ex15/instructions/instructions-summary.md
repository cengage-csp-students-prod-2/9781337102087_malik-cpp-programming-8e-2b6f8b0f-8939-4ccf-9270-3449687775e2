## Summary
During winter when it is very cold, typically, everyone would like to know the windchill factor, especially, before going out. Meteorologists use the following formula to compute the windchill factor, `W`:  
 
*W = 35.74 + 0.6215 × T - 35.75 × V<sup>0.16</sup> +  0.4275 × T × V<sup>0.16</sup> *

where `V` is the wind speed in miles per hour and `T` is the temperature in degrees Fahrenheit.

> Note: C++ always truncates (rounds down). 
- ```1.5 would become 1.```
- ```-5.9 would become -5.```

## Instructions
Write a program that prompts the user to input the wind speed in miles per hour, and the temperature in degrees Fahrenheit. The program then outputs the current temperature and the windchill factor. Your program must contain at least two functions: one to get the user input and the other to determine the windchill factor.

