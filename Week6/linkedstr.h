#ifndef LINKEDSTR_H
#define LINKEDSTR_H

#include <iostream>
using namespace std;
struct Node {
    int info;
    Node* next;
};

\
class LinkedStr {
private:
    Node* ptr;  

public:
    LinkedStr() {
        ptr = NULL;
    }
    ~LinkedStr() {
        Node* temp;
        while (ptr != NULL) {
            temp = ptr;
            ptr = ptr->next;
            delete temp;
        }
    }

    void makeStr(int len) {
        cout << "Enter " << len << " elements:\n";
        for (int i = 0; i < len; i++) {
            int value;
            cin >> value;
            Node* newNode = new Node{value, NULL};

            if (ptr == NULL) {
                ptr = newNode;
            } else {
                Node* temp = ptr;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newNode;
            }
        }
    }

    void displayStr() {
        if (ptr == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = ptr;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->info << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void removeFirst() {
        if (ptr == NULL) {
            cout << "List is empty. Nothing to remove.\n";
            return;
        }
        Node* temp = ptr;
        ptr = ptr->next;
        delete temp;
        cout << "First element removed.\n";
    }

    void removeLast() {
        if (ptr == NULL) {
            cout << "List is empty. Nothing to remove.\n";
            return;
        }

        if (ptr->next == NULL) {
            delete ptr;
            ptr = NULL;
        } else {
            Node* temp = ptr;
            while (temp->next->next != NULL)
                temp = temp->next;
            delete temp->next;
            temp->next = NULL;
        }
        cout << "Last element removed.\n";
    }

    void remove(int k) {
        if (ptr == NULL) {
            cout << "List is empty. Nothing to remove.\n";
            return;
        }
        if (ptr->info == k) {
            removeFirst();
            return;
        }

        Node* temp = ptr;
        while (temp->next != NULL && temp->next->info != k)
            temp = temp->next;

        if (temp->next == NULL) {
            cout << "Element " << k << " not found.\n";
        } else {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
            cout << "Element " << k << " removed.\n";
        }
    }
};

#endif