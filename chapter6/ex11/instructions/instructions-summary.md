## Summary
The following formula gives the distance between two points, **(x&#8321;,y&#8321;)** and **(x&#8322;,y&#8322;)** in the Cartesian plane:  

`$\sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$`

Given the center and a point on the circle, you can use this formula to find the radius of the circle. 
## Instructions
Write a program that prompts the user to enter the center and a point on the circle. The program should then output the circle’s radius, diameter, circumference, and area. Your program must have at least the following functions:
* `distance`: This function takes as its parameters four numbers that represent two points in the plane and returns the distance between them.
* `radius`: This function takes as its parameters four numbers that represent the center and a point on the circle, calls the function `distance` to find the radius of the circle, and returns the circle’s radius.
* `circumference`: This function takes as its parameter a number that represents the radius of the circle and returns the circle’s circumference. (If `r` is the radius, the circumference is _2πr_.)
* `area`: This function takes as its parameter a number that represents the radius of the circle and returns the circle’s area. (If `r` is the radius, the area is _πr²_.)
Assume that **π = 3.1416**.

>Format your output with `setprecision(2)` to ensure the proper number of decimals for testing!
