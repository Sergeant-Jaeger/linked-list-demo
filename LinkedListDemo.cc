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

	LinkedList<int> intLL;

	cout << "Adding integers 1 through 5 to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		intLL.push(i);
	}

	printList(intLL);
}

void floatList() {

	LinkedList<float> floatLL;

	cout << endl
		<< "Adding floats incrementing by fifths to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		floatLL.push(i / (float)5);
	}

	printList(floatLL);
}

void charList() {

	LinkedList<char> charLL;

	cout << endl
		<< "Adding \"Hello World\" to a linked list" << endl;

	char overusedProgrammerReference[] = "Hello World";

	for (unsigned int i = 0; i < sizeof(overusedProgrammerReference); i++) {

		charLL.push(overusedProgrammerReference[i]);
	}

	printList(charLL);
}

void PrintFooter() {

	cout << endl
		<< "************Ending Linked List Demonstration************" << endl;

}