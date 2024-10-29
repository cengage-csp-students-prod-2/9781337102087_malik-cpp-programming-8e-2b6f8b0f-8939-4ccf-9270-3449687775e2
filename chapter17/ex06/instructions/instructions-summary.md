## Instructions ##
1. Add the following operation to the `class` `linkedListType`:

```

void divideAt(linkedListType&lt;Type&gt; &amp;secondList,

const Type&amp; item);

//Divide the list at the node with the info item into two

//sublists.

//Postcondition: first and last point to the first and

// last nodes of the first sublist.

// secondList.first and secondList.last

// point to the first and last nodes of the

// second sublist.

```

Consider the following statements:

      unorderedLinkedList<int>; myList;
      unorderedLinkedList<int> otherList;

Suppose `myList` points to the list with the elements **34 65 18 39 27 89 12** (in this order). The statement

      myList.divideAt(otherList, 18);

divides `myList` into two sublists: `myList` points to the list with the elements **34 65**, and `otherList` points to the sublist with the elements **18 39 27 89 12**.

2. Write the definition of the function template to implement the operation `divideAt`. Also, write a program to test your function.