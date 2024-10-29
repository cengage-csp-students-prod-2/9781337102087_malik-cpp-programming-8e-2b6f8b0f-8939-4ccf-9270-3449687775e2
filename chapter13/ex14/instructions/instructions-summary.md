<!-- practice -->

## Instructions

In programming _Exercise 6 in Chapter 10_, we defined a `class` `romanType` to
implement Roman numbers in a program. In that exercise, we also implemented a
function, `romanToPositiveInteger`, to convert a Roman number into its equivalent
positive integer.

Modify the definition of the `class` `romanType` so that the member variables are declared as `protected`. Furthermore, overload the stream insertion and stream extraction operators for easy input and output. The stream insertion operator outputs the Roman number in the Roman format.

Also, include a member function, `positiveIntegerToRoman`, that converts a positive integer to an equivalent Roman number format. Write the definition of the member function `positiveIntegerToRoman`.

For simplicity, we assume that only the letter **I** can appear in front of another letter and that it appears only in front of the letters **V** and **X**. For example, **4** is represented as **IV**, **9** is represented as **IX**, **39** is represented as **XXXIX**, and **49** is represented as **XXXXIX**. Also, **40** will be represented as **XXXX**, **190** will be represented as **CLXXXX**, and so on.
