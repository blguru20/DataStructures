/*
 * LinkedList.h
 *
 *  Created on: 07-Nov-2019
 *      Author: nbhatm
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_



// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n);


void ReverseListIterative(Node ** head );

Node * ReverseListRecursive(Node * cur_,Node * prev =NULL );

void DeleteNodeByKey(Node ** head , int key);

void DeleteNodeByIndex(Node ** head , unsigned int index);

void insertAtBegin(Node** head, int data);

void insertAtTheEnd(Node* head, int data);

void insertAfter(Node* SomeNode, int data);



// This is code is contributed by rathbhupendra


#endif /* LINKEDLIST_H_ */
