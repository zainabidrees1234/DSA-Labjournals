#include <iostream>
#include "linkedstr.h"

int main() {
    LinkedStr list;
    int len;

    cout << "Enter the number of elements for the linked list: ";
    cin >> len;
    list.makeStr(len);
    
    cout << "\nInitial ";
    list.displayStr();
    list.removeFirst();
    cout << "\nAfter removing first element ";
    list.displayStr();
    list.removeLast();
    cout << "\nAfter removing last element ";
    list.displayStr();
    int key;
    cout << "\nEnter the element to remove: ";
    cin >> key;
    list.remove(key);
    cout << "\nAfter removing element " << key << " ";
    list.displayStr();

    return 0;
}