#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

//forward declaration for LinkedList
template <class T>
class LinkedList;

//LinkedListNode class definition
template <class T>
class LinkedListNode : public Node <T> {
	friend class LinkedList<T>;

	LinkedListNode<T>* next;

public:
	LinkedListNode(T nData, LinkedListNode<T>* nNext);
};

//LinkedListNode class implementation
template <class T>
LinkedListNode<T>::LinkedListNode(T nData, LinkedListNode<T>* nNext): Node<T>(nData) {

	next = nNext;
}

//LinkedList class definition
template <class T>
class LinkedList {

protected:
	LinkedListNode<T>* head;
	void reverse_print(const LinkedListNode<T>* node) const;
	void print(const LinkedListNode<T>* node) const;
	
public:
	LinkedList();
	void reverse_print() const;
	void print() const;
	void push(T nData);
};

//LinkedList class implementation
template <class T>
LinkedList<T>::LinkedList() {

	head = NULL;
}

template <class T>
void LinkedList<T>::reverse_print(const LinkedListNode<T>* node) const {

	if (node != NULL) {

		reverse_print(node->next);
		cout << node->data << ' ';
	}
}

template <class T>
void LinkedList<T>::reverse_print() const {

	cout << endl;
	reverse_print(head);
	cout << endl;
}

template <class T>
void LinkedList<T>::print(const LinkedListNode<T>* node) const {

	if (node != NULL) {

		cout << node->data << ' ';
		print(node->next);
	}
}

template <class T>
void LinkedList<T>::print() const {

	cout << endl;
	print(head);
	cout << endl;

}

template <class T>
void LinkedList<T>::push(T nData) {

	if (head == NULL) {

		head = new LinkedListNode<T>(nData, NULL);
	}
	else {

		LinkedListNode<T>* nNode = new LinkedListNode<T>(nData, head);
		head = nNode;
	}
}
#endif /*LINKEDLIST_H*/