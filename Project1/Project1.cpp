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

}

