## Instructions
**(Infix to Postfix)** 

Write a program that converts an infix expression into an equivalent postfix expression. The rules to convert an infix expression into an equivalent postfix expression are as follows:

Suppose `infx` represents the infix expression and `pfx` represents the postfix expression. The rules to convert `infx` into `pfx` are as follows:

1. Initialize `pfx` to an empty expression and also initialize the stack.
2. Get the next symbol, `sym`, from `infx`.

- If `sym` is an operand, append `sym` to `pfx`.
- If `sym` is **(**, push `sym` into the stack.
- If `sym` is **)**, pop and append all of the symbols from the stack until the most recent left parentheses. Pop and discard the left parentheses.
- If `sym` is an operator:
  - Pop and append all of the operators from the stack to `pfx` that are above the most recent left parentheses and have precedence greater than or equal to `sym`.
  - Push `sym` onto the stack.

3. After processing `infx`, some operators might be left in the stack. Pop and append to `pfx` everything from the stack.

In this program, you will consider the following (binary) arithmetic operators: `+`, `-`, `*`, and `/`.

You may assume that the expressions you will process are error free.

Note that more information and guidelines are given in the following steps.
