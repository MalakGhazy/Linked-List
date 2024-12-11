#include <iostream>
#include "Linkedlist.h"
using namespace std;
int main()
{
    Linkedlist list;

    list.addNode(10);
    list.addNode(20);
    list.addNode(30);

    cout << "Before insertion" << endl;
    list.display();

    cout << "\nAfter insertAfter:" << endl;

    list.InsertAfter(25, 20);
    list.display();
    cout <<endl;

    list.InsertAfter(15, 10);
    list.display();
    cout <<endl;

    list.InsertAfter(40,30);
    list.display();
    cout <<endl;

    list.InsertAfter(50, 50);


    cout << "\nAfter InsertBefore:" << endl;

    list.InsertBefore(55, 10);
    list.display();
    cout <<endl;

    list.InsertBefore(60, 20);
    list.display();
    cout <<endl;

    list.InsertBefore(45, 40);
    list.display();
    cout <<endl;

    list.InsertBefore(70, 70);

    int count = list.GetCount();
    cout << "\nNumber of nodes: " << count << endl;

    int data = list.GetDataByIndex(2);
    cout << "\nData at index 2: " << data << endl;

    cout << "Data at index 7: " << list.GetDataByIndex(7) << endl;

    cout << "Data at index -1: " << list.GetDataByIndex(-1) << endl;

    return 0;
}
