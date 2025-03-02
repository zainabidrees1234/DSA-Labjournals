#include "dynamic.h"
#include <iostream>
using namespace std;

bool IsValidParentheses(const string& expression);
int Precedence(char op);
string InfixToPostfix(const string& infix);
int EvaluatePostfix(string expression);

int main() {

cout << " Press 1 to chcek push and pop values" << endl;
cout << " Press 2 to check validity of parenthesized expression " << endl;
cout << " Press 3 for Infix to Postfix conversion" << endl;
cout << " Press 4 for Postfix evaluation " << endl;
int choice;
cout << "Enter your choice: " ;
cin >> choice;

// --------------EXAMPLE--------------

if (choice == 1){
    Stack<int> IntStack;
    Stack<float> FloatStack;
    int data;
    float val;

    IntStack.Push(35);
    FloatStack.Push(3.1415927);

    IntStack.Pop(data);
    cout << data << endl;

    FloatStack.Pop(val);
    cout << val << endl;

}

// --------------EXERCISE 2.2(a)---------------

else if (choice == 2){
    string expression;
    cout << "Enter a parenthesized expression: ";
    cin >> expression;

    if (IsValidParentheses(expression)) {
        cout << "The expression is valid!" << endl;
    }
    else {
        cout << "The expression is invalid!" << endl;
    }

}

// --------------EXERCISE 2.2(b)---------------

else if (choice == 3){
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    cout << "Postfix expression: " << InfixToPostfix(infix) << endl;

}

// --------------EXERCISE 2.2(c)---------------

else if (choice == 4){
    string postfixExpression;
    cout << "Enter a valid postfix expression (e.g., 23*5+): ";
    cin >> postfixExpression;

    int result = EvaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;

}
}




bool IsValidParentheses(const string& expression) {
    Stack<char> stack;

    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.Push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (stack.IsEmpty()) {
                return false;
            }
            char topChar;
            stack.Pop(topChar);

            if ((ch == ')' && topChar != '(') ||
                (ch == ']' && topChar != '[') ||
                (ch == '}' && topChar != '{')) {
                return false;
            }
        }
    }
    return stack.IsEmpty();
}




int Precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}




string InfixToPostfix(const string& infix) {
    Stack<char> stack;
    string postfix = "";

    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            stack.Push(ch);
        }
        else if (ch == ')') {
            char op;
            while (!stack.IsEmpty() && stack.Top() != '(') {
                stack.Pop(op);
                postfix += op;
            }
            stack.Pop(op);
        }
        else {
            while (!stack.IsEmpty() && Precedence(stack.Top()) >= Precedence(ch)) {
                char op;
                stack.Pop(op);
                postfix += op;
            }
            stack.Push(ch);
        }
    }
    while (!stack.IsEmpty()) {
        char op;
        stack.Pop(op);
        postfix += op;
    }
    return postfix;
}





int EvaluatePostfix(string expression) {
    Stack<int> stack(100);
    int operand1, operand2, result;

    for (char ch : expression) {
        if (isdigit(ch)) {
            stack.Push(ch - '0'); // Convert char to int
        }
        else {
            stack.Pop(operand2);
            stack.Pop(operand1);

            switch (ch) {
            case '+': result = operand1 + operand2; break;
            case '-': result = operand1 - operand2; break;
            case '*': result = operand1 * operand2; break;
            case '/': result = operand1 / operand2; break;
            default:
                cout << "Invalid Operator!" << endl;
                exit(1);
            }
            stack.Push(result);
        }
    }
    stack.Pop(result);
    return result;
}
