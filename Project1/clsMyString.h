#pragma once
#include "clsMyStack.h"


class clsMyString
{
private:
	string _value = " ";
protected:
	clsMyStack <string> myList;
	clsMyStack <string> myList2;
public:
	string getValue() {
		return _value;
	}
	void setValue(string value) {
		_value = value;
		myList.push(value);
	}
	__declspec(property(get = getValue, put = setValue)) string Value;

	void undo() {
		if (myList.isEmpty() == false) {
			myList2.push(myList.Top());
			myList.pop();
			if (!myList.isEmpty()) {
				_value = myList.Top();  // Update _value to previous state
			}
			else {
				_value = "";  // Nothing left in history
			}
		}

		else return;
	}

	void redo() {
		if (myList2.isEmpty() == false) {
			myList.push(myList2.Top());
			_value = myList2.Top();
			myList2.pop();
		}
		else return;
	}


};

