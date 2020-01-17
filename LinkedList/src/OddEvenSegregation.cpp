/*
 * OddEvenSegregation.cpp
 *
 *  Created on: 26-Nov-2019
 *      Author: nbhatm
 */


#include <set>
#include <unordered_set>
#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;



Node * PSegregateOddEven(Node * head){

	//int count = 0 ;
	Node* eBegin = NULL;
	Node* eEnd = NULL;
	Node* oBegin = NULL;
	Node* oEnd = NULL;

	//std::cout << "\even called!s ";
	while (head != NULL ) {
		if (head->data % 2 == 0) {
			//std::cout << "\even ";
			if (eBegin == NULL) {
				eBegin  = head;
				eEnd = eBegin;
				//eEnd->next = NULL;
			}
			else{
				eEnd->next = head;
				eEnd = eEnd->next;
				//eEnd->next = NULL;
			}
		} else /*if (head->data % 2 == 1) */{
		//	std::cout << "\odd ";
			if (oBegin == NULL) {
				oBegin  = head;
						oEnd = oBegin;
				}
				else{
					oEnd->next = head;
								oEnd = oEnd->next;
				}
		}
		head= head->next;
	}

	eEnd->next = oBegin;
	oEnd->next = NULL;
	return eBegin;

}

int main6()
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

	insertAtBegin(&head, 99);
	//insertAtBegin(&head, 98);
	insertAtTheEnd(head,88);
	insertAfter(second,45);

	printList(head);
	std::cout << "\n";

	head = PSegregateOddEven(head);


	printList(head);



	return 0;
}





