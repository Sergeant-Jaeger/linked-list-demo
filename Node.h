#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{

protected:
	T data;

public:
	Node(T nData);
};

template <class T>
Node<T>::Node(T nData) {

	data = nData;
}
#endif /*NODE_H*/