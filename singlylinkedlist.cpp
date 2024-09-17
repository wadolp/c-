// singlylinkedlist.cpp
#ifndef SINGLY_LINKED_LIST_CPP
#define SINGLY_LINKED_LIST_CPP
#include <iostream>
using namespace std;
#include "singlyLinkedList.h"
#include "Node.h"
SinglyLinkedList::SinglyLinkedList()
{
head = NULL;
}
SinglyLinkedList::~SinglyLinkedList()
{
// garbage collection
Node *tempNode = head;
Node *tempNodeC = tempNode;
while (tempNode != NULL)
{
tempNodeC = tempNode;
delete tempNode;
tempNode = tempNodeC->next;
} // while
head = NULL;
}
void SinglyLinkedList::insert(Node *newNode)
{
if (head == NULL) // when the singly linked list is empty
head = newNode;
else
{
// before adding newNoide, head points to the first node
// of SLL
newNode->next= head;
head = newNode;
}
}
void SinglyLinkedList::display()
{
Node *tempNode = head;
cout << endl;
while (tempNode != NULL)
{
cout << tempNode->display_Value() << " " << endl;
tempNode = tempNode->next;
} // while
}
void SinglyLinkedList::displayAddress(){
    //code to be ADDED for Project 1...
    Node *tempNode = head;
    cout << endl;
    while (tempNode != NULL)
    {
        cout << tempNode << " " << endl;
        tempNode = tempNode->next;
    } // while
}
void SinglyLinkedList::insertSomewhere(int position, Node *newNode) // countingfrom 0
{
// CODE TO BE ADDED for Project 1...
Node *temp;
temp = head;
if (position == 0){
    newNode->next = head;
    head = newNode;
    return;
}
for(int i =0; i<position-1; i++){
    temp = temp->next;
}
newNode->next = temp->next;
temp->next = newNode;
}
void SinglyLinkedList::swapNode(Node *tNode)
{
// CODE TO BE ADDED for Project 1...
}
#endif