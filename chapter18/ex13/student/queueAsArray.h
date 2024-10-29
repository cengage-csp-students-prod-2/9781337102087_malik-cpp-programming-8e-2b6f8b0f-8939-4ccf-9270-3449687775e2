//Header file QueueAsArray
 
#ifndef H_QueueAsArray
#define H_QueueAsArray
 
#include <iostream>
#include <cassert> 
 
using namespace std;

template<class Type>
class queueType
{
public:
    const queueType<Type>& operator=(const queueType<Type>&); 
            // overload the assignment operator
    void initializeQueue();
    int isEmptyQueue() const;
    int isFullQueue() const;

    Type front() const;

    Type back() const;

    void addQueue(Type queueElement);
    void deleteQueue();

    queueType(int queueSize = 100); 
    queueType(const queueType<Type>& otherQueue); // copy constructor
    ~queueType(); //destructor

private:
    int maxQueueSize;
    int queueFront;
    int queueRear;
    Type *list;  //pointer to array that holds queue elements 
};

//TODO: Write method definitions here


#endif