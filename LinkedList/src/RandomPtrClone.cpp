/*
 * RandomPtrClone.cpp
 *
 *  Created on: 29-Nov-2019
 *      Author: nbhatm
 */


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

#include <unordered_set>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* random;
};
void print(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}


Node* clone(Node* head){

}


int main() {
    Node* start = new Node(1);
    start->next = new Node(2);
    start->next->next = new Node(3);
    start->next->next->next = new Node(4);
    start->next->next->next->next = new Node(5);

    // 1's random points to 3
    start->random = start->next->next;

    // 2's random points to 1
    start->next->random = start;

    // 3's and 4's random points to 5
    start->next->next->random =
                    start->next->next->next->next;
    start->next->next->next->random =
                    start->next->next->next->next;

    // 5's random points to 2
    start->next->next->next->next->random =
                                      start->next;

    cout << "Original list : \n";
    print(start);

    cout << "\nCloned list : \n";
    Node *cloned_list = clone(start);
    print(cloned_list);    Node* start = new Node(1);
    start->next = new Node(2);
    start->next->next = new Node(3);
    start->next->next->next = new Node(4);
    start->next->next->next->next = new Node(5);

    // 1's random points to 3
    start->random = start->next->next;

    // 2's random points to 1
    start->next->random = start;

    // 3's and 4's random points to 5
    start->next->next->random =
                    start->next->next->next->next;
    start->next->next->next->random =
                    start->next->next->next->next;

    // 5's random points to 2
    start->next->next->next->next->random =
                                      start->next;

    cout << "Original list : \n";
    print(start);

    cout << "\nCloned list : \n";
    Node *cloned_list = clone(start);
    print(cloned_list);

    return 0;

    return 0;
}



