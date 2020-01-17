/*
 * PairWiseSwap.cpp
 *
 *  Created on: 26-Nov-2019
 *      Author: nbhatm
 */




/*
 * DetectLoop.cpp
 *
 *  Created on: 10-Nov-2019
 *      Author: nbhatm
 */
#include <set>
#include <unordered_set>
#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;



Node * PairWiseSwap(Node * head){

	//int count = 0 ;
	Node* cur = head;

	while (cur!=NULL && cur->next!=NULL){
		int temp = cur->data ;
			cur->data = cur->next->data;
			cur->next->data = temp;
			cur = cur->next->next;
	}
	return head;

}

int main5()
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


	//
	head = PairWiseSwap(head);

	printList(head);



	return 0;
}


