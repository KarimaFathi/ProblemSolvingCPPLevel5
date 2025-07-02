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
	//1
	T getItem(int index) {
		return _myList.getItem(index);
	}
	//2
	void reverse() {
		_myList.reverse();
	}
	//3
	void updateItem(int index, T val) {
		_myList.updateItem(index, val);
	}
	//4
	void insertAfter(int index, T val) {
		_myList.insertAfter(index, val);
	}
	//5
	void insertAtFront(T val) {
		_myList.insertAtBeginning(val);
	}
	//6
	void insertAtBack(T val) {
		_myList.insertAtEnd(val);
	}

	//7 
	void clear() {
		_myList.clear();
	}



};

