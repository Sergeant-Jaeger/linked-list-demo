#include "LinkedListDemo.h"

int main() {

	printHeader();

	intList();

	floatList();

	charList();

	printFooter();

	return 0;
}


//printHeader prints an output header
void printHeader() {

	cout << "***********Starting Linked List Demonstration***********" << endl
		<< endl;
}

//printList takes a LinkedList as an argument, prints a message
//and then calls both the reversePrint and print methods for the
//LinkedList argument.
template <class T>
void printList(LinkedList<T> linkedList) {

	cout << endl <<
		"Printing the linked list:" << endl;

	linkedList.reversePrint();

	linkedList.print();
}

//intList calls a loop that pushes integers onto a LinkedList and
//then calls the printList function passing the integer LinkedList
void intList() {

	LinkedList<int> intLL;

	cout << "Adding integers 1 through 5 to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		intLL.push(i);
	}

	printList(intLL);
}

//floatList calls a loop that pushes floats onto a LinkedList and
//then calls the printList function passing the float LinkedList
void floatList() {

	LinkedList<float> floatLL;

	cout << endl
		<< "Adding floats incrementing by fifths to a linked list" << endl;

	for (int i = 1; i <= 5; i++) {

		floatLL.push(i / (float)5);
	}

	printList(floatLL);
}

//charList calls a loop that pushes characters onto a LinkedList and
//then calls the printList function passing the character LinkedList
void charList() {

	LinkedList<char> charLL;

	cout << endl
		<< "Adding \"Hello World\" to a linked list" << endl;

	char overusedProgrammerReference[] = "Hello World";

	for (unsigned int i = 0; i < sizeof(overusedProgrammerReference) - 1; i++) {

		charLL.push(overusedProgrammerReference[i]);
	}

	printList(charLL);
}

//printFooter prints an output footer
void printFooter() {

	cout << endl
		<< "************Ending Linked List Demonstration************" << endl;

}