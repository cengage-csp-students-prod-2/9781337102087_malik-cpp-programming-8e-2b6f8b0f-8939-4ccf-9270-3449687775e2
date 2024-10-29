#ifndef H_NodeType
#define H_NodeType 
 
#include <iostream>

using namespace std;

template <class Type> 
class nodeType
{ 
public: 
    const nodeType<Type>& operator=(const nodeType<Type>&);  
      //Overload the assignment operator.

    void setInfo(const Type& elem);
      //Function to set the info of the node.
      //Postcondition: info = elem;

    Type getInfo() const;
      //Function to return the info of the node.
      //Postcondition: The value of info is returned.

    void setLink(nodeType<Type> *ptr);
      //Function to set the link of the node.
      //Postcondition: link = ptr;

    nodeType<Type>* getLink() const;
      //Function to return the link of the node.
      //Postcondition: The value of link is returned.

    nodeType();
       //Default constructor
       //Postcondition: link = nullptr;

    nodeType(const Type& elem, nodeType<Type> *ptr);
       //Constructor with parameters
       //Sets info point to the object elem points to and
       //link is set to point to the object ptr points to.
       //Postcondition: info = elem; link = ptr

    nodeType(const nodeType<Type> &otherNode); 
      //Copy constructor

    ~nodeType();
      //Destructor

private:
    Type info;
    nodeType<Type> *link;
};


template <class Type>
void nodeType<Type>::setInfo(const Type& elem)
{
    info = elem;
}

template <class Type>
Type nodeType<Type>::getInfo() const
{
    return info;
}

template <class Type>
void nodeType<Type>::setLink(nodeType<Type> *ptr)
{
    link = ptr;
}

template <class Type>
nodeType<Type>* nodeType<Type>::getLink() const
{
    return link;
}

template <class Type>
nodeType<Type>::nodeType()
{
    link = nullptr;
}

template <class Type>
nodeType<Type>::nodeType(const Type& elem, nodeType<Type> *ptr)
{
    info = elem;
    link = ptr;
}

template <class Type>
nodeType<Type>::nodeType(const nodeType<Type>& otherNode)
{
    info = otherNode.info;
    link = otherNode.link;
}

template <class Type>
nodeType<Type>::~nodeType()
{
    delete link;
}

    //overload the assignment operator
template <class Type>
const nodeType<Type>& nodeType<Type>::operator=
                      (const nodeType<Type> &otherNode)
{ 
    if (this != &otherNode) //avoid self-copy
    {
        info = otherNode.info;
        link = otherNode.link;
    }

     return *this; 
}

#endif