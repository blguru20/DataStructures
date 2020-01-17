/*
 * InterSection.cpp
 *
 *  Created on: 27-Nov-2019
 *      Author: nbhatm
 */

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

int FindIntersection(Node* head1, Node* head2) {

	Node* node1 = head1;
	Node* node2 = head2;
	int length1 = 0, length2 = 0;
	int offSet = 0;
	while (node1 != NULL) {
		node1 = node1->next;
		length1++;
	}
	while (node2 != NULL) {
		node2 = node2->next;
		length2++;
	}

	offSet = abs(length1 - length2);

	if (length1 > length2) {
		length1 = 0;
		while (length1 < offSet) {
			length1++;
			head1 = head1->next;

		}
	}

	else if (length2 > length1) {
		length2 = 0;
		while (length2 < offSet) {
			length2++;
			head2 = head2->next;
		}
	}

	while(head1!=NULL && head2!=NULL){
		if(head1 == head2){
			return head1->data;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	return -1;
}

int main7() {
	Node* head1 = NULL;
	Node* head2 = NULL;
	Node* second = NULL;
	Node* third = NULL;

	Node* second2 = NULL;
	Node* third2 = NULL;

	// allocate 3 nodes in the heap
	head1 = new Node();
	head2 = new Node();
	second = new Node();
	third = new Node();
	second2 = new Node();
	third2 = new Node();

	head1->data = 1; // assign data in first node
	head1->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;

	head2->data = 11; // assign data in first node
	head2->next = second2; // Link first node with second

	second2->data = 22; // assign data to second node
	second2->next = third;

	third2->data = 33; // assign data to third node
	third2->next = third;

	insertAtBegin(&head1, 99);
	//insertAtBegin(&head1, 98);
	insertAtTheEnd(head1, 88);
	insertAfter(second, 45);

	printList(head1);
	std::cout << "\n";

	printList(head2);
	std::cout << "\n";
	std::cout<< FindIntersection(head1,head2)<< std::endl;

	return 0;
}

