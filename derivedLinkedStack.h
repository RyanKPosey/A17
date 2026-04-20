//Header file derivedLinkedStack.h 
 
#ifndef H_derivedLinkedStack
#define H_derivedLinkedStack
 
#include <iostream>  
#include "unorderedLinkedList.h"
 
using namespace std;

template<class Type>
class linkedStackType: public unorderedLinkedList<Type>
{
public:
    const linkedStackType<Type>& operator=(const linkedStackType<Type>& otherStack);
    void initializeStack();
    bool isEmptyStack() const;
    bool isFullStack() const;
    void push(const Type& newItem);
    Type top() const;
    void pop();
    bool operator==(const linkedStackType<Type>& otherStack) const;
};

template<class Type>
const linkedStackType<Type>& linkedStackType<Type>::operator=(const linkedStackType<Type>& otherStack)
{
    if (this != &otherStack)
    {
        linkedListType<Type>::operator=(otherStack);
    }

    return *this;
}

template<class Type>
void linkedStackType<Type>::initializeStack()
{
    unorderedLinkedList<Type>::initializeList();
}

template<class Type>
bool linkedStackType<Type>::isEmptyStack() const
{
    return unorderedLinkedList<Type>::isEmptyList();
}

template<class Type>
bool linkedStackType<Type>::isFullStack() const
{
    return false;
}

template<class Type>
void linkedStackType<Type>::push(const Type& newElement)
{
    unorderedLinkedList<Type>::insertFirst(newElement);
}

template<class Type>
Type linkedStackType<Type>::top() const
{
    return unorderedLinkedList<Type>::front();	
}

template<class Type>
void linkedStackType<Type>::pop()
{
    nodeType<Type> *temp;

    if (this->head != nullptr)
    {
        temp = this->head;
        this->head = this->head->next;
        delete temp;
        this->count--;

        if (this->head == nullptr)
        {
            this->tail = nullptr;
        }
    }
    else
    {
        cout << "Cannot remove from an empty stack." << endl;
    }
}

template<class Type>
bool linkedStackType<Type>::operator==(const linkedStackType<Type>& otherStack) const
{
    nodeType<Type> *current1 = this->head;
    nodeType<Type> *current2 = otherStack.head;

    while (current1 != nullptr && current2 != nullptr)
    {
        if (current1->data != current2->data)
        {
            return false;
        }

        current1 = current1->next;
        current2 = current2->next;
    }

    return (current1 == nullptr && current2 == nullptr);
}

#endif
