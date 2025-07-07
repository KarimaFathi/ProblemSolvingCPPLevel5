#pragma once
#include "clsMyQueueArr.h"
using namespace std;

template <class T>

class  clsMyStackArr :public   clsMyQueueArr <T>
{

public:
	//overriding
	void push(T Item)
	{
		clsMyQueueArr <T>::_myList.insertAtBeginning(Item);
	}

	T Top()
	{
		return clsMyQueueArr <T>::front();
	}

	T Bottom()
	{
		return clsMyQueueArr <T>::back();
	}

};
