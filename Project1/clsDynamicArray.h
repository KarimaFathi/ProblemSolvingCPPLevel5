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
};

