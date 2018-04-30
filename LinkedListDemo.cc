#include "LinkedListDemo.h"

int main() {

	printHeader();

	intList();

	floatList();

	charList();

	printFooter();

	return 0;
}

void printHeader() {

	cout << "***********Starting Linked List Demonstration***********" << endl
		<< endl;
}

template <class T>
void printList(LinkedList<T> linkedList) {

	cout << endl <<
		"Printing the linked list:" << endl;

	linkedList.reverse_print();

	linkedList.print();
}

void intList() {

	LinkedList<int> intList;

	cout << "Adding integers 1 through 5 to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		intList.push(i);
	}

	printList(intList);
}

void floatList() {

	LinkedList<float> floatList;

	cout << endl
		<< "Adding floats incrementing by fifths to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		floatList.push(i / (float)5);
	}

	printList(floatList);
}

void charList() {

	LinkedList<char> charList;

	cout << endl
		<< "Adding \"Hello World\" to a linked list" << endl;

	char overusedProgrammerReference[] = "Hello World";

	for (unsigned int i = 0; i < sizeof(overusedProgrammerReference); i++) {

		charList.push(overusedProgrammerReference[i]);
	}

	printList(charList);
}

void PrintFooter() {

	cout << endl
		<< "************Ending Linked List Demonstration************" << endl;

}