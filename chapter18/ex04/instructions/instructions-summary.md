## Instructions
a. Add the following operation to the `class` `linkedStackType`.
```cpp
void reverseStack(linkedStackType<Type> &otherStack);
```

This operation copies the elements of a stack in reverse order onto another stack.

Consider the following statements:

```cpp
linkedStackType<int> stack1;
linkedStackType<int> stack2;
```
The statement

```cpp
stack1.reverseStack(stack2);
```
copies the elements of `stack1` onto `stack2` in reverse order. That is, the top element of `stack1` is the bottom element of `stack2`, and so on. The old contents of `stack2` are destroyed, and `stack1` is unchanged.

b. Write the definition of the function `template` to implement the operation `reverseStack`.

Write a program to test the `class` `linkedStackType`. 

