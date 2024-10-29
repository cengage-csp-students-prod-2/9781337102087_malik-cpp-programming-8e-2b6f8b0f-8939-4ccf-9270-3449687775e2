## Instructions ##
In this chapter, the `class` to implement the nodes of a linked list is defined as a `struct`. The following rewrites the definition of the `struct` `nodeType` so that it is declared as a `class` and the member variables are `private`.

```
template &lt;class Type&gt;

class nodeType

{

public:

const nodeType&lt;Type&gt;&amp; operator=(const nodeType&lt;Type&gt;&amp;);

//Overload the assignment operator.

void setInfo(const Type&amp; elem);

//Function to set the info of the node.

//Postcondition: info = elem;

Type getInfo() const;

//Function to return the info of the node.

//Postcondition: The value of info is returned.

void setLink(nodeType&lt;Type&gt; *ptr);

//Function to set the link of the node.

//Postcondition: link = ptr;

nodeType&lt;Type&gt;* getLink() const;

//Function to return the link of the node.

//Postcondition: The value of link is returned.

nodeType();

//Default constructor

//Postcondition: link = nullptr;

nodeType(const Type&amp; elem, nodeType&lt;Type&gt; *ptr);

//Constructor with parameters

//Sets info point to the object elem points to and

//link is set to point to the object ptr points to.

//Postcondition: info = elem; link = ptr

nodeType(const nodeType&lt;Type&gt; &amp;otherNode);

//Copy constructor

~nodeType();

//Destructor

private:

Type info;

nodeType&lt;Type&gt; *link;

};

```


Write the definitions of the member functions of the `class` `nodeType`. Also, write a program to test your class.