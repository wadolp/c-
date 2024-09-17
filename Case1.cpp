#include <iostream>
#include "singlyLinkedList.h"
#include "Node.h"
#include "singlyLinkedList.cpp"
#include "Node.cpp"

// Case 2
int main()
{
// create a node object
Node *n1;
n1 = new Node(100); // create anode
Node *n2;
n2 = new Node(200);
Node *n3;
n3 = new Node(300);
Node *n4;
n4 = new Node(400);
Node *n5;
n5 = new Node(500);
// create a singly linked list
SinglyLinkedList *sLL1 = new SinglyLinkedList(); // create a singly linked
// list
sLL1->insert(n1); // insert a node to the front of the singly linked list
sLL1->insert(n2);
sLL1->insert(n3);
sLL1->display();
sLL1->insertSomewhere(1, n4); // insert a node n4 into the singly linked
// list before the node at position 1 (the
// first node counting as 0)
sLL1->display();
system("PAUSE");
return 0;

}