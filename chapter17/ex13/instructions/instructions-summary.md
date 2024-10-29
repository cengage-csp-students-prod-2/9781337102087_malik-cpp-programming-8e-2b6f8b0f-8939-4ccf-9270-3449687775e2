## Instructions ##
This chapter defined and identified various operations on a circular linked list.

1. Write the definitions of the `class` `circularLinkedList` and its member functions. (You may assume that the elements of the circular linked list are in ascending order.)

2. Write a program to test various operations of the class defined in the step above. Your program should accept a sorted list as input and output the following: 
   * The length of the list.
   * The list after deleting a number.
   * A message indicating if a number is contained in the list.

An example of the program is shown below: 
```text
Enter number ending with -999
1
2
3
4
5
6
7
8
9
10
-999

List 1: 1 2 3 4 5 6 7 8 9 10 
Length List 1: 10
Enter the number to be searched:  4

4 found in the list
Enter the number to be deleted: 4

After deleting the node, List 1: 1 2 3 5 6 7 8 9 10 
Length List 1: 9
```

Your program should use the value **-999** to denote the end of the input list. 
