#ifndef STATIC_H
#define STATIC_H

#include <iostream>
using namespace std;

#define maxQue 100
typedef int ItemType;

class Queue {
private:
    ItemType items[maxQue];
    int front, rear, count;

public:
    Queue() {
        count = 0;
        front = 0;
        rear = 0;
    }

    bool IsEmpty() {
        return (count == 0);
    }

    bool IsFull() {
        return (count == maxQue);
    }

    void Insert(ItemType newItem) {
        if (IsFull()) {
            cout << "Overflow\n";
        } else {
            items[rear] = newItem;
            rear = (rear + 1) % maxQue;
            ++count;
        }
    }

    void Remove(ItemType &item) {
        if (IsEmpty()) {
            cout << "Underflow\n";
        } else {
            item = items[front];
            front = (front + 1) % maxQue;
            --count;
        }
    }
};


#endif