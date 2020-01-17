/*
 * MidOfLinkedList.cpp
 *
 *  Created on: 07-Nov-2019
 *      Author: nbhatm
 */
#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

//todo : mid of list recursive

void PrintMiddleFastPtr(Node* head ){

	Node * fastPtr = head;
	Node * SlowPtr = head;

	while ((fastPtr!=nullptr )&& (fastPtr->next!=nullptr )){
		SlowPtr = SlowPtr->next;
		fastPtr = fastPtr->next->next;
	}

	std::cout << SlowPtr->data << "\n";
}

void PrintMiddleCounter(Node* head ){

	Node * fastPtr = head;
	Node * SlowPtr = head;
	unsigned  int count =0;

	while ((fastPtr!=nullptr )){
		if ((count&1) == 1)
		SlowPtr = SlowPtr->next;

		fastPtr = fastPtr->next;
		count++;
	}

	std::cout << SlowPtr->data << "\n";
}

void PrintMiddleNaive(Node* head ){

	Node * cur = head;
	Node * mid = head;
	unsigned int count = 0;

	while (cur!=nullptr ){

		cur = cur->next;
		count++;
	}
	unsigned int i = 1;
	while (i <= count/2){

		mid = mid->next;
		i++;
	}

	std::cout << mid->data << "\n";
}
// Driver code
int main2()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;

	printList(head);
	std::cout << "\n";

	insertAtBegin(&head, 99);
	//insertAtBegin(&head, 98);
	insertAtTheEnd(head,88);
	insertAfter(second,45);
	printList(head);

	PrintMiddleFastPtr(head);
	PrintMiddleNaive(head);
	PrintMiddleCounter(head);


	return 0;
}



