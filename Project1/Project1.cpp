#include <iostream>
#include "clsMyQueue.h"
using namespace std;




int main()
{
	clsMyQueue<int> myQueue;
	myQueue.push(10);
	myQueue.push(20);
	myQueue.push(30);
	myQueue.push(40);

	myQueue.print();
  
	cout << "Queue's size : " << myQueue.size() << endl;

	myQueue.pop();
	myQueue.print();

	cout << "Queue's front : " << myQueue.front() << endl;
	cout << "Queue's back  : " << myQueue.back() << endl;

	cout << "Item in pos 2 : " << myQueue.getItem(2);

	myQueue.reverse();
	cout << "\nQueue after reverse : ";
	myQueue.print();

	myQueue.insertAfter(2, 800);
	cout << "\nQueue after inserting 800 after item at index 2 : ";
	myQueue.print();


	myQueue.updateItem(1, 200);
	cout << "\nupdate item at index 2 : ";
	myQueue.print();

	myQueue.insertAtFront(500);
	cout << "\nQueue after inserting 500 at front : ";
	myQueue.print();

	myQueue.insertAtBack(900);
	cout << "\nQueue after inserting 900 at back : ";
	myQueue.print();


	myQueue.clear();
	cout << "\nQueue after clear : ";
	myQueue.print();
}

