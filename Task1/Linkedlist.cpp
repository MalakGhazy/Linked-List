//
// Created by pc king on 12/11/2024.
//
# include <iostream>
using namespace std;
#include "Linkedlist.h"
Linkedlist::Linkedlist()
{
    head=tail=nullptr;
}
void Linkedlist ::addNode(int _data)
{
    Node *newNode = new Node(_data);
    if(head == nullptr)
    {
        head=tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev = tail;
    tail=newNode;

}
void Linkedlist ::display()
{
    Node *current = head;
    if(current == nullptr)
    {
        cout << "Empty Linked List .\n";
    }
    while(current!= nullptr)
    {
        cout << current->data <<"\t";
        current = current->next;
    }

}
void Linkedlist::InsertAfter(int data, int afterData)
{
    Node *current = head;
    while (current!= nullptr)
    {
        if(current->data == afterData)   ///Node Found
        {
            Node *newNode = new Node(data);
            newNode->next = current->next;
            newNode->prev = current;
            //Case 1: there is a node next to the current node
            if (current->next != nullptr) {
                /// the previous pointer of the next node to the original current node
                /// should be pointing on the new node as it replaced it
                current->next->prev = newNode;
            }
            current->next = newNode;  // Link the current node to the new node
            //Case 2: current node is a tail
            if (current == tail) {
                tail = newNode;
            }
            return;
        }
        /// current-> data != afterData
            current= current->next;
        }
    cout << "\nNode with value " << afterData << " not found." << endl;  // Node not found

}

void Linkedlist::InsertBefore(int data, int beforeData) {
    Node* current = head;

    // Traverse the list to find the node with beforeData
    while (current != nullptr) {
        if (current->data == beforeData) {  // Node found
            Node* newNode = new Node(data);  // Create the new node

            // Case 1: Inserting before the head node
            if (current == head) {
                newNode->next = head;
                newNode->prev = nullptr;
                head->prev = newNode;  // Update the previous pointer of the old head
                head = newNode;        // Move the head pointer to the new node
            } else {
                // Case 2: Inserting before a non-head node
                newNode->next = current;
                newNode->prev = current->prev;
                /// the next pointer of the previous node to the original current node
                /// should be pointing on the new node as it replaced it

                // Update the previous node's next pointer to the new node
                current->prev->next = newNode;
                current->prev = newNode;
            }

            return;  // Node inserted, exit the function
        }
        current = current->next;  // Move to the next node
    }

    // Node with beforeData not found
    cout << "Node with value " << beforeData << " not found." << endl;
}

int Linkedlist ::GetCount()
{
    int counter=0;
    Node *current = head;
    while (current != nullptr)
    {
        counter++;
        current= current->next;
    }
    return counter;

}

int Linkedlist ::GetDataByIndex(int index)
{
    if(index <0)
    {
        cout << "Index Can not be Negative.\n";
        return -1;
    }
    Node *current = head;
    int count=0;
    while (current!= nullptr)
    {
        if(count == index)
        {
            return current->data;
        }
        current= current->next;
        count++;
    }
    // If the index is out of range
    cout << "Index out of range." << endl;
    return -1;
}

Linkedlist::~Linkedlist()
{
    //dtor
}
