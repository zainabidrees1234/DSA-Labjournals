// #ifndef DYNAMIC_H
// #define DYNAMIC_H

// #include <iostream>
// #include <string>
// using namespace std;

// template <class ItemType>
// class Que {
// public:
//     Que(int max);
//     ~Que();
//     bool IsFull() const;
//     bool IsEmpty() const;
//     void Insert(ItemType newItem);
//     void Remove(ItemType& item);

// private:
//     int front, rear, maxQue, count;
//     ItemType* items;
// };

// template <class ItemType>
// Que<ItemType>::Que(int max) {
//     maxQue = max + 1;
//     front = 0;
//     rear = 0;
//     count = 0;
//     items = new ItemType[maxQue];
// }

// template <class ItemType>
// Que<ItemType>::~Que() {
//     delete[] items;
// }

// template <class ItemType>
// bool Que<ItemType>::IsEmpty() const {
//     return (count == 0);
// }

// template <class ItemType>
// bool Que<ItemType>::IsFull() const {
//     return (count == maxQue);
// }

// template <class ItemType>
// void Que<ItemType>::Insert(ItemType newItem) {
//     if (IsFull())
//         cout << "Queue Overflow" << endl;
//     else {
//         items[rear] = newItem;
//         rear = (rear + 1) % maxQue;
//         count++;
//     }
// }

// template <class ItemType>
// void Que<ItemType>::Remove(ItemType& item) {
//     if (IsEmpty())
//         cout << "Queue Underflow" << endl;
//     else {
//         item = items[front];
//         front = (front + 1) % maxQue;
//         count--;
//     }
// }

// #endif