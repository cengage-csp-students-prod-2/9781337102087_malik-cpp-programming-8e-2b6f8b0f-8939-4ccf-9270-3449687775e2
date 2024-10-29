## Instructions
*Example 5-6* implements the *Number Guessing Game* program. If the guessed number is not correct, the program outputs a message indicating whether the guess is low or high. 

Modify the program as follows: 
Suppose that the variables `num` and `guess` are as declared in *Example 5-6* and `diff` is an `int` variable. Let `diff` = the absolute value of (`num - guess`). 

If `diff` is **0**, then guess is correct and the program outputs a message indicating that the user guessed the correct number. 

Suppose `diff` is not **0**. Then the program outputs the message as follows:

* If `diff` is greater than or equal to **50**, the program outputs the
message indicating that the guess is **very high** (if guess is greater
than num) or **very low** (if guess is less than num).
* If `diff` is greater than or equal to **30** and less than **50**, the program
outputs the message indicating that the guess is **high** (if guess is
greater than num) or **low** (if guess is less than num).
* If `diff` is greater than or equal to **15** and less than **30**, the program
outputs the message indicating that the guess is **moderately high**
(if guess is greater than num) or **moderately low** (if guess is less
than num).
* If `diff` is greater than **0** and less than **15**, the program outputs the
message indicating that the guess is **somewhat high** (if guess is
greater than num) or **somewhat low** (if guess is less than num).

As in *Programming Exercise 15*, give the user no more than five tries to guess the number.

(To find the absolute value of `num - guess`, use the expression `abs(num - guess)`. The function `abs` is from the header file `cstdlib`.)


## Grading
You will not be graded on this lab.