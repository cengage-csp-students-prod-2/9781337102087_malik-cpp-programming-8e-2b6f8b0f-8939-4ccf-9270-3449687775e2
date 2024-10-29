## Summary
One way to determine how healthy a person is, is by measuring the body fat of the person. The formulas to determine the body fat for female and male are as follows:

Body fat formula for women:

* *A1 = (body weight X **0.732**) + **8.987** *
* *A2 = wrist measurement (at fullest point) / **3.140** *
* *A3 = waist measurement (at navel) X **0.157** *
* *A4 = hip measurement (at fullest point) X **0.249** *
* *A5 = forearm measurement (at fullest point) X **0.434** *
* *B = A1 + A2 - A3 - A4 + A5*
* *Body fat = body weight - B*
* *Body fat percentage = body fat X **100** / body weight*

Body fat formula for men:
* *A1 = (body weight X **1.082**) + **94.42** *
* *A2 = waist measurement X **4.15** *
* *B = A1 - A2*
* *Body fat = body weight - B*
* *Body fat percentage = body fat X **100** / body weight *

## Instructions
Write a program to calculate the body fat of a person.  Prompt the user to input:

1. Their gender ('**m**' or '**M**' for male, '**f**' or '**F**' for female).

If male was entered, additionally prompt the user to input:
2. Their body weight (in pounds).
3. Their waist measurement at fullest point (in inches).

If female was entered, additionally prompt the user to input:
2. Their body weight (in pounds).
3. Their wrist measurement at fullest point (in inches).
4. Their waist measurement at navel (in inches).
5. Their hip measurement at fullest point (in inches).
6. Their forearm measurement at fullest point (in inches).

The program then outputs:
1. Body fat.
2. Body fat percentage.

