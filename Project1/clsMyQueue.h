#pragma once
#include "clsDblLinkedList.h"
using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsDblLinkedList<T> _myList;

public:
	void push(T item) {
		_myList.insertAtEnd(item);
	}

	void pop() {
		_myList.deleteFirstNode();
	}

	void print() {
		_myList.printList();
	}

	int size() {
		return _myList.sizeOfList();
	}

	bool isEmpty() {
		return _myList.isEmpty();
	}

	T front() {
		return _myList.getItem(0);
	}

	T back() {
		return _myList.getItem(size() - 1);
	}
};

