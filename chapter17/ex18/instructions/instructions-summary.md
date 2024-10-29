## Instructions ##
1. Derive the `class` `intLinkedList` from the `class` `unorderedLinkedList` as follows:

```
class intLinkedList: public unorderedLinkedList&lt;int&gt;

{

public:

void splitEvenOddList(intLinkedList &amp;evenList,

intLinkedList &amp;oddList);

//Function to rearrange the nodes of the linked list so

//that evenList consists of even integers and oddList

//consists of odd integers.

//Postcondition: evenList consists of even integers.

// oddList consists of odd integers.

// The original list is empty.

};

```
Also write the definition of the function `splitEvensOddsList`. Note that this function does not create any new node, it only rearranges the nodes of the original list so that nodes with even integers are in `evensList` and nodes with odd integers are in `oddsList`.

2. Write a program that uses `class` `intLinkedList` to create a linked list of integers and then uses the function `splitEvensOddsList` to split the list into two sublists.