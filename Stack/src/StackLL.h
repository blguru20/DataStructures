/*
 * StackLL.h
 *
 *  Created on: 01-Jan-2020
 *      Author: nbhatm
 */

#ifndef STACKLL_H_
#define STACKLL_H_

#include "LinkedList.h"

class StackLL {

private :
Node* top;



public:

	StackLL(){
		top = NULL;
	}
	virtual ~StackLL(){

	}




	bool isEmpty(){
		return (top == NULL);
	}

	int Top(){
	    return top->data;
	}

	int Pop(){
	if(top == NULL){
		std::cout << "Underflow ";
		return 0;
	}
	Node* temp = top;
	top = top->next;
	int tempd = temp->data;
	delete temp;
	return tempd;

	}

	void Push(int item){
		auto node = new Node;
		node->data = item;
		node->next = top;
		top = node;

	}


};

#endif /* STACKLL_H_ */
