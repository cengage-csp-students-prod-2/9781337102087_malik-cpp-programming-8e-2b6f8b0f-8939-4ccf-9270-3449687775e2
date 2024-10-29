## Instructions ##

Design a class to perform various matrix operations. A matrix is a set of numbers arranged in rows and columns. Therefore, every element of a matrix has a row position and a column position. If *A* is a matrix of five rows and six columns, we say that the matrix *A* is of the size 5 X 6. Clearly, a convenient place to store a matrix is in a two-dimensional array. Two matrices can be added and subtracted if they have the same size. Suppose A = [a<sub>ij</sub>] and B = [b<sub>ij</sub>] and are two matrices of the same size *m* \**n* in which a<sub>ij</sub> denotes the element of A in the *i* th row and the *j* th column, and so on. The sum and difference of A and B are given by:

A + B = [a<sub>ij</sub> + b<sub>ij</sub>]

A - B = [a<sub>ij</sub> - b<sub>ij</sub>]

The multiplication of A and B (A \* B) is defined only if the number of columns of A is the same as the number of rows of B. If A is of the size m * n and B is of the size n * t, then A * B = [c <sub>ik</sub> ] is of the size m * t and the element c<sub>ik</sub> is given by the formula:

c<sub>ik</sub> = a<sub>i1</sub>b<sub>1k</sub> + a<sub>i2</sub>b<sub>2k</sub> + **...** + a<sub>in</sub>b<sub>nk</sub>

Design and implement a `class` `matrixType` that can store a matrix of any size. Overload the operators `+`, `–`, and `*` to perform the addition, subtraction, and multiplication operations, respectively, and overload the operator `<<` to output a matrix. Also, write a test program to test various operations on the matrices.

