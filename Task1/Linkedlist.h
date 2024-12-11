//
// Created by pc king on 12/11/2024.
//

#ifndef TASK1_LINKEDLIST_H
#define TASK1_LINKEDLIST_H
#include "Node.h"


class Linkedlist {
public:
    Node* head;
    Node* tail;
    Linkedlist();
    ///1- Add Node
    void addNode(int _data);
    ///2- Remove Node
    ///3- Display Node
    void display();
    ///4- indsert node after given node
    void InsertAfter(int data, int afterData);
    ///5- indsert node before given node
    void InsertBefore(int data, int beforeData);
    ///6- get number of nodes
    int GetCount();
    ///7- get data in the given
    int GetDataByIndex(int index);
    ~Linkedlist();

protected:

private:


};


#endif //TASK1_LINKEDLIST_H
