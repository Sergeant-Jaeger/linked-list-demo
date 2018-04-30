#include "LinkedListDemo.h"

int main() {

	PrintHeader();

	IntList();

	FloatList();

	CharList();

	PrintFooter();

	return 0;
}

void PrintHeader() {

	cout << "***********Starting Linked List Demonstration***********" << endl
		<< endl;
}

template <class T>
void PrintList(LinkedList<T> linkedList) {

	cout << endl <<
		"Printing the linked list:" << endl;

	linkedList.reverse_print();
}

void IntList() {

	LinkedList<int> intList;

	cout << "Adding integers 1 through 5 to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		intList.push(i);
	}

	PrintList(intList);
}

void FloatList() {

	LinkedList<float> floatList;

	cout << endl
		<< "Adding floats incrementing by fifths to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		floatList.push(i / (float)5);
	}

	PrintList(floatList);
}

void CharList() {

	LinkedList<char> charList;

	cout << endl
		<< "Adding \"Hello World\" to a linked list" << endl;

	char overusedProgrammerReference[] = "Hello World";

	for (unsigned int i = 0; i < sizeof(overusedProgrammerReference); i++) {

		charList.push(overusedProgrammerReference[i]);
	}

	PrintList(charList);
}

void PrintFooter() {

	cout << endl
		<< "************Ending Linked List Demonstration************" << endl;

}