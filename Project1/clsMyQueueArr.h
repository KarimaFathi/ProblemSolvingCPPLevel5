#pragma once
#include "clsDynamicArray.h"

template <class T>
class clsMyQueueArr : public clsDynamicArray <T>
{
protected:
	clsDynamicArray <T> _myList;

public:
	void push(T item) {
		_myList.insertAtEnd(item);
    }

	void pop() {
		_myList.deleteFirstItem();
	}

	void print() {
		_myList.printList();
	}

	int size() {
		return _myList.size();
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
	void updateItem(int index, T newVal) {
		_myList.setItem(index, newVal);
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

