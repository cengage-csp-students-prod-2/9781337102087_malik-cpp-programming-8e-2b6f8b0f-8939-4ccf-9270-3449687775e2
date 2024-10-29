//Queue derived from the class linkedListType
//Header file: queueLinked.h
 
#ifndef H_QueueType
#define H_QueueType
 
#include <iostream> 
#include "unorderedLinkedList.h"
 
using namespace std;

template<class Type>
class linkedQueueType: public unorderedLinkedList<Type>
{
public:
    bool isEmptyQueue() const;
    bool isFullQueue() const;
    void initializeQueue();
    void addQueue(const Type& newElement);
    Type front() const;
    Type back() const;
    void deleteQueue();
};

//TODO: Write the definitions for the linkedQueueType methods declared above

#endif