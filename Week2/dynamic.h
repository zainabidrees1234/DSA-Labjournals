#ifndef STATIC_H
#define STATIC_H

#include <iostream>
#include <cstdlib>
using namespace std;

template <class ItemType>
class Stack {
private:
    int top;
    int maxStack;
    ItemType* items; 

public:
    Stack();
    Stack(int max);
    ~Stack();
    bool IsEmpty() const;
    bool IsFull() const;
    void Push(ItemType newItem);
    void Pop(ItemType& item);
    ItemType Top() const;

};

template<class ItemType> 
Stack <ItemType> ::Stack() { 
    maxStack = 500;
    top = -1;
    items = new ItemType[500];  
}


template<class ItemType>
Stack <ItemType> ::Stack(int max) {  
    maxStack = max;
    top = -1;
    items = new ItemType[max];  
}

template<class ItemType>
Stack <ItemType> ::~Stack() { 
    delete[] items;  
}

template<class ItemType>
bool Stack <ItemType> :: IsEmpty() const { 
    return (top == -1); 
}  

template<class ItemType>
bool Stack <ItemType> :: IsFull() const { 
    return (top == maxStack - 1); 
}  


template<class ItemType>
void Stack <ItemType> :: Push (ItemType newItem) {
    if (IsFull()) {
        cout << "Stack Overflow" << endl;
        exit(1);
    }
    top++;
    items[top] = newItem;
}

template<class ItemType>
void Stack <ItemType> ::Pop(ItemType& item) {
    if (IsEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    item = items[top];
    top--;
}

template<class ItemType>
ItemType Stack<ItemType>::Top() const {
    return items[top];
}



#endif