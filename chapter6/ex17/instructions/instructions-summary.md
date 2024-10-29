## Instructions
Consider the provided C++ code in the *main.cpp* file:

The function `func2` has three parameters of type `int`, `int`, and `double`, say `a`, `b`, and `c`, respectively. Write the definition of `func2` so that its action is as follows:
* Prompt the user to input two integers and store the numbers in a and b, respectively.
* If both of the numbers are nonzero:
* If **a >= b**, the value assigned to `c` is `a` to the power `b`, that is, **aᵇ**.
* If **a < b**, the value assigned to `c` is `b` to the power `a`, that is, **bᵃ**. 
* If `a` is nonzero and `b` is zero, the value assigned to `c` is the square root of the absolute value of `a`.
* If `b` is nonzero and `a` is zero, the value assigned to `c` is the square root of the absolute value of `b`.
* Otherwise, the value assigned to `c` is **0**. 
The values of `a`, `b`, and `c` are passed back to the calling environment.
After completing the definition of the `func2` and writing its function prototype, run your program.
