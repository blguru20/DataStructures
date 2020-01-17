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

bool DetectLoop(Node * head){


	std::set<Node *> mySet;
	while (head->next != NULL ){
		if (mySet.find(head) == mySet.end()){
		mySet.insert(head);
		head = head->next;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool DetectAndRemoveLoop(Node * head){

	Node * temp;
	std::set<Node *> mySet;
	while (head->next != NULL ){
		if (mySet.find(head) == mySet.end()){
		mySet.insert(head);
		temp = head;
		head = head->next;
		}
		else
		{
			temp->next = NULL;
			return true;
		}
	}
	return false;
}

bool DetectLoopFloyd(Node * head){

	Node * slowptr = head;
	Node * fastptr = head;
while(fastptr!=NULL && fastptr->next!=NULL){
	slowptr = slowptr->next;
	fastptr = fastptr->next->next;
	if (slowptr == fastptr){
		return true;
	}

}
return false;
}



int main4()
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
	third->next = head;

//	printList(head);
	std::cout << "\n";

	//auto ret = DetectLoopFloyd(head);
	auto ret = DetectAndRemoveLoop(head);
	std::cout << " has loop : "<< ret <<"\n";
	printList(head);



	return 0;
}


