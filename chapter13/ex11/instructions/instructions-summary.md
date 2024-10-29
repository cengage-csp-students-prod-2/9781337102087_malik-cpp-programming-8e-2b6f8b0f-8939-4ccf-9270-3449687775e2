<!-- practice -->

## Instructions

Recall that in C++, there is no check on an array index out of bounds. However, during program execution, an array index out of bounds can cause serious problems. Also, in C++, the array index starts at 0.

Design and implement the `class` `myArray` that solves the array index out of bounds problem and also allows the user to begin the array index starting at any integer, positive or negative. Every object of type `myArray` is an array of type `int`. During execution, when accessing an array component, if the index is out of bounds, the program must terminate with an appropriate error message. Consider the following statements:

     myArray&lt;int&gt; list(5);          //Line 1
     myArray&lt;int&gt; myList(2, 13);    //Line 2
     myArray&lt;int&gt; yourList(-5, 9);  //Line 3

The statement in Line 1 declares `list` to be an array of five components, the component type is `int`, and the components are: `list[0]`, `list[1]`, ...,`list[4]`; the statement in Line 2 declares `myList` to be an array of 11 components, the component type is `int`, and the components are: `myList[2]`, `myList[3]`, ..., `myList[12]`; the statement in Line 3 declares `yourList` to be an array of 14 components, the component type is `int`, and the components are: `yourList[-5]`,`yourList[-4]`, ..., `yourList[0]`, ..., `yourList[8]`. Write a program to test the `class` `myArray`.
