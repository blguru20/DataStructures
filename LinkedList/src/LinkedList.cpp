// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;


// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

void ReverseListIterative(Node ** head ){
	auto cur = *head;
	Node * prev = nullptr;
	Node * next = nullptr;
	if ((*head) == nullptr){
		return ;
	}
	else if ((*head)->next == nullptr){
		return ;
	}

	while (cur !=nullptr){
		std::cout << "item : " << cur->data << "\n";
		next = cur->next ;
		cur->next = prev;
		prev = cur;
		cur = next;

	}
	*head = prev;
}

Node * ReverseListRecursive(Node * cur_ , Node * prev_){

	if (cur_->next == NULL ){
		cur_->next =prev_;
		return cur_;
	}
	else {

		auto cur =  ReverseListRecursive(cur_->next,cur_);
		cur_->next = prev_;
		return cur;

	}
}

void DeleteNodeByKey(Node ** head , int key){
	auto cur = *head;
	Node * prev = *head;
	if (cur == nullptr){
		return ;
	}
	if (cur->next == nullptr){
		if (cur->data == key){
		delete cur;
		cur = nullptr;
		}
	}
	while (cur !=nullptr){
		if (cur->data == key){
			prev->next = cur->next;
			if (cur == *head){
				*head = prev->next ;
			}
			delete cur;
			cur = nullptr;
			return;
			}
		prev = cur;
		cur = cur->next;
	}
}

void DeleteNodeByIndex(Node ** head , unsigned int index){
	unsigned int i =0;
	auto cur = *head;
	Node * prev = *head;
	if (cur == nullptr){
		return ;
	}
	if ((*head)->next == nullptr){
		if (index == 0){
		delete cur;
		cur = nullptr;
		}
	}
	while (cur !=nullptr){
		if (i == index){
			prev->next = cur->next;
			if (cur == *head){
				*head = prev->next ;
			}
			delete cur;
			cur = nullptr;
			return;
			}
		i++;
		prev = cur;
		cur = cur->next;
	}
}

void insertAtBegin(Node** head, int data){
	auto node = new Node;
	node->data = data;
	node->next = (*head);
	*head = node;
}

void insertAtTheEnd(Node* head, int data){
	auto node = new Node;
	node->data = data;
	node->next = (nullptr);

	while(head->next!=nullptr){
		head=head->next;
	}
	head->next = node;

}

void insertAfter(Node* SomeNode, int data){
	auto node = new Node;
	node->data = data;
	node->next = SomeNode->next;
	SomeNode->next = node;

}

// Driver code
int main1()
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
	//DeleteNodeByKey(&head,2);
	//DeleteNodeByIndex(&head,1);
	//ReverseList(&head);
	insertAtBegin(&head, 99);
	insertAtTheEnd(head,88);
	insertAfter(second,45);
	printList(head);


	return 0;
}

// This is code is contributed by rathbhupendra
