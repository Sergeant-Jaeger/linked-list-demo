/*
Author: Aaron Jaeger
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

//forward declaration of LinkedList for friend
//class declaration
template <class T>
class LinkedList;

/*
Class: LinkedListNode

Parent: Node

Notes: This class is implemented with a template
	for data flexibility. The class also declares
	a friend class for direct access to private
	datamembers
*/
template <class T>
class LinkedListNode : public Node<T> {
	
	//declare LinkedList as a friend class to allow access
	//to private datamembers
	friend class LinkedList<T>;

	LinkedListNode<T>* next;

public:
	
	//LinkedListNode takes class T data in its constructor
	//then feeds it to its parent's constructor
	LinkedListNode(T nData, LinkedListNode<T>* nNext) : Node<T>(nData) {

		next = nNext;
	}
};

/*
Class: LinkedList

Parent: n/a

Notes: This class is implemented with a template
	for data flexibility.
*/
template <class T>
class LinkedList {

	LinkedListNode<T>* head;

	//reversePrint utilizes recursion to print the contents
	//of the last node first.
	void reversePrint(const LinkedListNode<T>* node) const {

		if (node != nullptr) {

			reversePrint(node->next);
			cout << node->data << ' ';
		}
	}
	
	//print utilizes recrusion to print the contents of head
	//first followed by subsequent nodes in the linked list
	void print(const LinkedListNode<T>* node) const {
		
		if (node != nullptr) {

			cout << node->data << ' ';
			print(node->next);
		}
	}

public:
	
	LinkedList() {

		head = nullptr;
	}

	//this reversePrint method makes a call to the private
	//reversePrint method to ensure the first node passed is
	//the head of the linked list
	void reversePrint() const {

		cout << endl;
		reversePrint(head);
		cout << endl;
	}

	//this print method makes a call to the private print
	//method to ensure the first node passed is the head of
	//the linked list
	void print() const {

		cout << endl;
		print(head);
		cout << endl;

	}

	//push inserts the class T data into a new node and that
	//node is then inserted into the head position of the 
	//linked list
	void push(T nData) {

		if (head == nullptr) {

			head = new LinkedListNode<T>(nData, nullptr);
		}
		else {

			LinkedListNode<T>* nNode = new LinkedListNode<T>(nData, head);
			head = nNode;
		}
	}
};
#endif /*LINKEDLIST_H*/