/*
 * NthFromEnd.cpp
 *
 *  Created on: 08-Nov-2019
 *      Author: nbhatm
 */

#include <bits/stdc++.h>
#include "LinkedList.h"

unsigned int NthFromEnd(Node* head, unsigned int n){

    unsigned int count = 0;
	if(head->next == NULL){
		if (n == 1)
		{
			std::cout << " : nth " << head->data <<std::endl;
		}
		return 1;
	}

	else{
		count =  1+NthFromEnd(head->next, n);
		if (count == n){
			std::cout << " : nth " << head->data <<std::endl;
		}
		return count;
	}

}

int main3()
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
	NthFromEnd(head,6);
	head  = ReverseListRecursive(head);
	printList(head);



	return 0;
}



