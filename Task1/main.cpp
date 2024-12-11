#include <iostream>
#include "Linkedlist.h"
using namespace std;
int main()
{
    Linkedlist list;

    list.addNode(10);
    list.addNode(20);
    list.addNode(30);

    cout << "Before insertAfter:" << endl;
    list.display();

    list.InsertAfter(25, 20);

    cout << "\nAfter insertAfter:" << endl;
    list.display();

    list.InsertBefore(15, 20);

    cout << "\nAfter InsertBefore:" << endl;
    list.display();


    list.InsertAfter(40, 40);

    list.InsertBefore(50, 50);

    int count = list.GetCount();
    cout << "Number of nodes: " << count << endl;

    int data = list.GetDataByIndex(2);
    cout << "\nData at index 2: " << data << endl;

    cout << "Data at index 7: " << list.GetDataByIndex(7) << endl;

    cout << "Data at index -1: " << list.GetDataByIndex(-1) << endl;

    return 0;
}
