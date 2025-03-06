// --------------Exercise 5.1 and 5.2(combined)---------------

#include <iostream>
#include <string>
#include "PQueue.h"
using namespace std;
int main() {
    int N;
    cout << "Enter the number of priority levels: ";
    cin >> N;
    PQueue<string> pq(N);
    pq.Insert("Zainab", 2);
    pq.Insert("Habiba", 0);
    pq.Insert("Kashf", 1);
    pq.Insert("Maryam", 0);
    pq.Insert("Rohan", 3);
    pq.Insert("Sabahat", 2);

    string item;
    cout << "Removing tasks from the priority queue:\n";
    while (!pq.IsEmpty()) {
        pq.Remove(item);
        cout << item << endl;
    }
    return 0;
}