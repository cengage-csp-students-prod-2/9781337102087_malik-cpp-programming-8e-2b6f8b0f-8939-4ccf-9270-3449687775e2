## Instructions ##
This chapter uses the `class` `rectangleType` to illustrate how to overload the operators `+`, `*`, `==`, `!=`, `>>`, and `<<`. In this exercise, first redefine the `class` `rectangleType` by declaring the instance variables as `protected` and then overload additional operators as defined in parts 1 to 3.

1. Overload the pre- and post-increment and decrement operators to increment and decrement, respectively, the length and width of a rectangle by one unit. (Note that after decrementing the length and width, they must be positive.)

2.  Overload the binary operator `– ` to subtract the dimensions of one rectangle from the corresponding dimensions of another rectangle. If the resulting dimensions are not positive, output an appropriate message and do not perform the operation.

3. The operators `==` and `!=` are overloaded by considering the lengths and widths of rectangles. Redefine the functions to overload the relational operator by considering the areas of rectangles as follows: Two rectangles are the same, if they have the same area; otherwise, the rectangles are not the same. Similarly, rectangle **yard1** is greater than rectangle **yard2** if the area of **yard1** is greater than the area of **yard2**. Overload the remaining relational operators using similar definitions.

4. Write the definitions of the functions to overload the operators defined in steps 1 through 3. 

5. Write a test program that tests various operations on the `class` `rectangleType`.