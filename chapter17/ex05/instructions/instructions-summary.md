## Instructions ##
1. Add the operation `divideMid` to the `class` `linkedList` as follows:

```
//This operation divides the given list into two sublists

//of (almost) equal sizes.

//Postcondition: first points to the first node and last

// points to the last node of the first

// sublist.

// sublist.first points to the first node

// and sublist.last points to the last node

// of the second sublist.

```
Consider the following statements:

     unorderedLinkedList&lt;int&gt; myList;
     unorderedLinkedList&lt;int&gt; subList;

Suppose `myList` points to the list with elements **34 65 27 89 12** (in this order). The statement:

     myList.divideMid(subList);



divides `myList` into two sublists: `myList` points to the list with the elements **34 65 27**, and `subList` points to the sublist with the elements **89 12**.

2. Write the definition of the function template to implement the operation `divideMid`. Also, write a program to test your function.