#include "static.h"
#include <iostream>
using namespace std;
typedef char ItemType;
string ReverseString(const string& str);

int main (){
    cout << "Press 1 to see the top value, popped and pushed items" << endl;
    cout << "Press 2 to reverse a string";
    int choice ;
    cout << "Enter your choice: ";
    cin >> choice;

// --------------EXECISE 2.1 (a)--------------

    if(choice == 1){
        Stack s;
        char item;
    
        for (int i = 0; i < 20; i++){
            s.Push(i);
            cout << "Pushed values in stack: " << endl;
            cout << i << " " << endl;
        }
    
        cout << "Top element (Peek): " << s.Peek() << endl;
    
        for (int i = 0; i < 20; i++) {
            s.Pop(item);
            cout << "Popped values from stack: " << endl;
            cout << item << " " << endl;
        }
    
    }

// --------------EXECISE 2.1 (b)--------------

    else if (choice == 2){
        string input;
        cout << "Enter a string: ";
        getline(cin, input);
    
        cout << "Reversed string: " << ReverseString(input) << endl;
    }
     return 0;

}



string ReverseString(const string& str) {
    Stack s;
    for (char ch : str) {
        s.Push(ch);
    }

    string reversed = "";
    ItemType item;
    while (!s.IsEmpty()) {
        s.Pop(item);
        reversed += item;
    }

    return reversed;
}
