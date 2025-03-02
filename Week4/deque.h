#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

template <class ItemType>
class Deque {
private:
    int front, rear, maxSize, count;
    ItemType* arr;

public:
    Deque(int size);
    ~Deque();
    bool IsEmpty() const;
    void insertLeft(ItemType item);
    void insertRight(ItemType item);
    ItemType removeLeft();
    ItemType removeRight();
};

template <class ItemType>
Deque<ItemType>::Deque(int size) {
    maxSize = size;
    arr = new ItemType[maxSize];
    front = -1;
    rear = -1;
    count = 0;
}

template <class ItemType>
Deque<ItemType>::~Deque() {
    delete[] arr;
}

template <class ItemType>
bool Deque<ItemType>::IsEmpty() const {
    return (count == 0);
}

template <class ItemType>
void Deque<ItemType>::insertLeft(ItemType item) {
    if (front == -1) {
        front = rear = 0;
    } else {
        front = (front - 1 + maxSize) % maxSize;
    }
    arr[front] = item;
    count++;
}

template <class ItemType>
void Deque<ItemType>::insertRight(ItemType item) {
    if (rear == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % maxSize;
    }
    arr[rear] = item;
    count++;
}

template <class ItemType>
ItemType Deque<ItemType>::removeLeft() {
    ItemType item = arr[front];
    front = (front + 1) % maxSize;
    count--;
    return item;
}

template <class ItemType>
ItemType Deque<ItemType>::removeRight() {
    ItemType item = arr[rear];
    rear = (rear - 1 + maxSize) % maxSize;
    count--;
    return item;
}

bool isPalindrome(string str) {
    Deque<char> dq(str.length());
    for (char ch : str)
        dq.insertRight(ch);

    while (!dq.IsEmpty()) {
        if (dq.removeLeft() != dq.removeRight())
            return false;
    }
    return true;
}

#endif