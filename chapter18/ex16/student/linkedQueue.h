//Header file linkedQueue.h
 
#ifndef H_linkedQueue
#define H_linkedQueue
  
#include <iostream> 
#include <cassert>

#include "queueADT.h"

using namespace std;

//Definition of the node
template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};

template<class Type>
class linkedQueueType: public queueADT<Type>
{
public:
    const linkedQueueType<Type>& operator=
                    (const linkedQueueType<Type>&); 
              //overload the assignment operator
    bool isEmptyQueue() const;
		//Function to determine if the queue is empty. 
		//Postcondition: Returns true if the queue is empty;
    	//               otherwise, it returns false
    bool isFullQueue() const;
		//Function to determine if the queue is full. 
		//Postcondition: Returns true if the queue is full;
    	//               otherwise, it returns false

    int queueCount();

    void initializeQueue();
		//Initialize the queue to an empty state
		//Postcondition: queueFront = nullptr, queueRear = nullptr
	
	Type front() const;
		//Function to return the first element of the queue.
		//Precondition: The queue exists and is not empty.
 		//Postcondition: If the queue is empty, the program 
		//               terminates; otherwise, the first 
 		//               element of the queue is returned.  

    Type back() const;
		//Function to return the last element of the queue.
		//Precondition: The queue exists and is not empty.
 		//Postcondition: If the queue is empty, the program 
		//               terminates; otherwise, the last 
		//               element of the queue is returned.


    void addQueue(const Type& queueElement);
		//Function to add queueElement to the queue.
		//Precondition: The queue exists and is not full.
		//Postcondition: The queue is changed and queueElement
		//               is added to the queue.

    void deleteQueue();
		//Function  to remove the first element of the queue.
		//Precondition: The queue exists and is not empty.
		//Postcondition: The queue is changed and the first 
		//               element is removed from the queue.

    linkedQueueType(); 
		//Default constructor
    linkedQueueType(const linkedQueueType<Type>& otherQueue); 
		//Copy constructor
    ~linkedQueueType(); 
		//Destructor

private:
	//TODO: add count variable here
    
    nodeType<Type> *queueFront; //pointer to the front of the queue
    nodeType<Type> *queueRear;  //pointer to the rear of the queue
};


template<class Type>
linkedQueueType<Type>::linkedQueueType() //default constructor
{
	queueFront = nullptr; // set front to nullptr
	queueRear = nullptr;  // set rear to nullptr
}

template<class Type>
bool linkedQueueType<Type>::isEmptyQueue() const
{
    return (queueFront == nullptr);
}

template<class Type>
bool linkedQueueType<Type>::isFullQueue() const
{
    return false;
}

//TODO:Add the function queueCount to return the number of elements in the queue.

template<class Type>
void linkedQueueType<Type>::initializeQueue()
{
    nodeType<Type> *temp;

    while (queueFront!= nullptr)   //while there are elements left
                                //in the queue
    {
        temp = queueFront;    //set temp to point to the current node
        queueFront = queueFront->link;  //advance first to the 
            							//next node
        delete temp;       //deallocate memory occupied by temp
    }
    queueRear = nullptr;  //set rear to nullptr
} //end initializeQueue

//TODO: Modify addQueue method to use the count variable
template<class Type>
void linkedQueueType<Type>::addQueue(const Type& newElement)
{
    nodeType<Type> *newNode;

    newNode = new nodeType<Type>;   //create the node

    newNode->info = newElement; //store the info
    newNode->link = nullptr;  //initialize the link field to nullptr
	
    if (queueFront == nullptr) //if initially the queue is empty
    {
        queueFront = newNode;
        queueRear = newNode;
    }
    else        //add newNode at the end
    {
        queueRear->link = newNode;
        queueRear = queueRear->link;
    }
}//end addQueue

template<class Type>
Type linkedQueueType<Type>::front() const
{
	assert(queueFront != nullptr);
   	return queueFront->info; 
}

template<class Type>
Type linkedQueueType<Type>::back() const
{
	assert(queueRear!= nullptr);
   	return queueRear->info;
}

//TODO: Modify deleteQueue method to use the count variable
template<class Type>
void linkedQueueType<Type>::deleteQueue()
{
    nodeType<Type> *temp;
   
    if (!isEmptyQueue())
    {
        temp = queueFront;  //make temp point to the 
                            //first node
        queueFront = queueFront->link; //advance queueFront 
        delete temp;    //delete the first node

        if (queueFront == nullptr) //if after deletion the 
                                //queue is empty
            queueRear = nullptr;   //set queueRear to nullptr
    }
    else
        cerr << "Cannot remove from an empty queue" << endl;
}//end deleteQueue

template<class Type>
linkedQueueType<Type>::~linkedQueueType() //destructor
{
	nodeType<Type> *temp;

	while (queueFront != nullptr)	  //while there are elements left in the queue
	{
	   temp = queueFront;         //set temp to point to the current node
	   queueFront = queueFront->link; //advance first to the next node
	   delete temp;          //deallocate memory occupied by temp
	}
   
	queueRear = nullptr;  // set rear to nullptr
}

template<class Type>
const linkedQueueType<Type>& linkedQueueType<Type>::operator=
								(const linkedQueueType<Type>& otherQueue)
{
	nodeType<Type> *newNode; //pointer to create a node
	nodeType<Type> *current; //pointer to traverse the list.
     
	if (this != &otherQueue) //avoid self-copy
	{
		if (queueFront != nullptr)  //if the list is not empty, destroy the list
			initializeQueue();

		if (otherQueue.queueFront == nullptr) //otherList is empty
		{
			queueFront = nullptr;
			queueRear = nullptr;
		}	
		else
		{
			current = otherQueue.queueFront;	//current points to the 
										        //list to be copied

				//copy the front element
			queueFront = new nodeType<Type>;		//create the node
   			queueFront->info = current->info;	//copy the info
   			queueFront->link = nullptr;  			//set the link field of
											//the node to nullptr
			queueRear = queueFront;            //make rear point to the first node
			current = current->link; //make current point to the next
  		  							 //node of the list being copied

				//copy the remaining list
			while (current != nullptr)
			{
				newNode = new nodeType<Type>;
				newNode->info = current->info;
				newNode->link = nullptr;
				queueRear->link = newNode;
				queueRear = newNode;
				current = current->link;
			}//end while

		}//end else
	}//end else

   return *this; 
}

	//copy constructor
template<class Type>
linkedQueueType<Type>::linkedQueueType(
            				const linkedQueueType<Type>& otherQueue) 
{
    nodeType<Type> *newNode; //pointer to create a node
    nodeType<Type> *current; //pointer to traverse the list

    if (otherQueue.queueFront == nullptr) //otherList is empty
    {
		queueFront = nullptr;
		queueRear = nullptr;
	}
	else
	{
		current = otherQueue.queueFront;  //current points to the 
									       //list to be copied

			//copy the first node
		queueFront = new nodeType<Type>;  //create the node
		queueFront->info = current->info; //copy the info
		queueFront->link = nullptr;  	      //set the link field of 
									      //the node to nullptr
		queueRear = queueFront;    //make rear point to the 
								   //front node
		current = current->link;   //make current point to the 
								   //next node

			//copy the remaining list
		while (current != nullptr)
		{
			newNode = new nodeType<Type>;	//create a node
			newNode->info = current->info;	//copy the info
			newNode->link = nullptr;   	    //set the link of 
											//newNode to nullptr
			queueRear->link = newNode; 		//attach newNode after rear
			queueRear = newNode;   			//make rear point to
										//the actual rear node
			current = current->link;    //make current point to
									    //the next node
		}//end while

	}//end else
}//end copy constructor

#endif