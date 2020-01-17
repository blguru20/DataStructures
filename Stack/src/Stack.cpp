//============================================================================
// Name        : Stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "StackLL.h"
using namespace std;

#define MAX 10;

class Stack{
	int top;
	int Arr[10];


public:
	Stack(){
		top = -1;
	}

	bool isEmpty(){
		return (top < 0);
	}

	int Top(){
	    if (top < 0) {
	        cout << "Stack Underflow";
	        return 0;
	    }
		return Arr[top] ;
	}

	int Pop(){

	    if (top < 0) {
	        cout << "Stack Underflow";
	        return 0;
	    }
	    else {
	        int x = Arr[top--];
	        return x;
	    }
	}

	void Push(int item){

	    if (top >= 9) {
	        cout << "Stack overflow";

	    }
	    else {
	      Arr[++top] = item;
	      std::cout << "pushed into stack :  " << item << "\n";

	    }
	}

};

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


	  StackLL s;
	    s.Push(10);
	    s.Push(20);
	    s.Push(30);
	    s.Push(90);
	    cout << s.Top() << "  top stack\n";
	    s.Pop();
	    cout << s.Top() << "  top stack\n";

	return 0;
}
