## Instructions ##
Write a program to test various operations of the `class` `doublyLinkedList`. Your program should accept a list of integers from a user and use the `doubleLinkedList` class to output the following: 

1. The list in ascending order.
2. The list in descending order.
3. The list after deleting a number.
4. A message indicating if a number is contained in the list.
5. Output of the list after using the copy constructor.
6. Output of the list after using the assignment operator.

An example of the program is shown below: 
```text
Enter a list of positive integers ending with -999: 
83
121
98
23
57
33
-999

List in ascending order: 23  33  57  83  98  121  
List in descending order: 121  98  83  57  33  23  
Enter item to be deleted: 57

List after deleting 57 : 23  33  83  98  121  
Enter item to be searched: 23

23 found in the list.
********Testing copy constructor***********
intList: 23  33  83  98  121  
********Testing assignment operator***********
temp: 23  33  83  98  121  
```


Your program should use the value **-999** to denote the end of the input list. 

