#include <iostream>
#include "list.h"

int main (){
cout << " Press 1 to drive the test program of List Class" << endl;
cout << " Press 2 to reverse a string using List Class" << endl;
int choice ;
cin >> choice;
if (choice ==1){
    List<int> myList;
    myList.push(10);
    myList.push(20);
    myList.push(30);
    cout << "List after pushes: ";
    myList.display();  

    myList.insertafter(20, 25);
    cout << "List after inserting 25 after 20: ";
    myList.display();

    myList.deleteItem(30);
    cout << "List after deleting 30: ";
    myList.display();
}

   else if (choice ==2){
    List<char> charList;
    string input, reversed;
    cout << "Enter a string to reverse: ";
    cin >> input;
    for (char c : input) {
        charList.push(c);
    }
    while (!charList.emptyList()) {
        reversed += charList.pop();
    }
    cout << "Reversed string: " << reversed << endl;
   } 

}