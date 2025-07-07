#pragma once
#include<iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
private:
	int _size = 0;
	T* _ptr;
public:
	clsDynamicArray(int size = 0) {
		if (size < 0) {
			_size = 0;
		}
		_size = size;
		_ptr = new T[_size];
	}

	~clsDynamicArray() {
		delete[]  _ptr;
	}

	bool setItem(int index, T val) {
		if (index >= _size)
			return false;

		_ptr[index] = val;
		return true;
		
	}

	bool isEmpty() {
		return (_size == 0);
	}


	void printList() {
		for (int i = 0; i < _size; i++) {
			cout << _ptr[i] << " ";
		}
	}

	int size() {
		return _size;
	}

	bool resize(int newSize) {
		if (newSize < 0 || newSize == _size)
			return false;

		T* _newPtr = new T[newSize];

		int copyLength = (newSize < _size) ? newSize : _size;
		for (int i = 0 ; i < copyLength; i++) {
			_newPtr[i] = _ptr[i];
		}

		delete[] _ptr;
		_size = newSize;
		_ptr = _newPtr;
	
		
		return true;
	}

	T getItem(int index) {
		return _ptr[index];
	}


	void reverse() {
		T* _newPtr = new T[_size];
		for (int i = 0; i < _size; i++) {
			_newPtr[i] = _ptr[_size - 1 - i];
		}

		delete[] _ptr;
		_ptr = _newPtr;

	}

	void clear() {
		delete[] _ptr;
		_ptr = new T[0];
		_size = 0;
	}

	void deleteItemAt(int index) {
		if (index >= _size || index < 0) {
			return;
		}


		T* _newPtr = new T[_size - 1];
		for (int i = 0, j = 0;  i < _size; i++) {
			if (i != index) {
				_newPtr[j] = _ptr[i];
				j++;
			}
			else {
				continue;
			}
				
			
		}
		delete[] _ptr;
		_ptr = _newPtr;
		_size--;
	}

	void deleteFirstItem() {
		deleteItemAt(0);
	}

	void deleteLastItem() {
		deleteItemAt(_size - 1);
	}

	int find(T item) {
		for (int i = 0; i < _size; i++) {
			if (_ptr[i] == item) {
				return i;
			}
		}
		return -1;
	}

	bool deleteItem(T item) {
		int index = find(item);
		if (index == -1) {
			return false;
		}
		
		deleteItemAt(index);
		return false;
	}

	void insertAt(int index, T item) {
		if (index < 0 || index > _size) {
			return;
		}
		T* _newPtr = new T[_size + 1];
	    for(int i = 0; i< index; i++) {
			_newPtr[i] = _ptr[i];
		}
		_newPtr[index] = item;
		for (int i = index; i < _size; i++) {
			_newPtr[i + 1] = _ptr[i];
		}
		delete[] _ptr;
		_ptr = _newPtr;
		_size++;
	}

	void insertAtBeginning(T item) {
		insertAt(0, item);
	}

	void insertAtEnd(T item) {
		insertAt(_size, item);
	}

	void insertBefore(int index, T item) {
		insertAt(index - 1, item);
	}

	void insertAfter(int index, T item) {
		insertAt(index + 1, item);
	}


};

