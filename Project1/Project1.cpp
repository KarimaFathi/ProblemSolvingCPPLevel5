#include <iostream>
#include "clsMyStackArr.h"
using namespace std;




int main()
{
	clsMyStackArr <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    cout << "\nStack: \n";
    MyStack.print();

    cout << "\nStack Size: " << MyStack.size();
    cout << "\nStack Top: " << MyStack.Top();
    cout << "\nStack Bottom: " << MyStack.Bottom();

    MyStack.pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.print();


    cout << "\n\n Item(2) : " << MyStack.getItem(2);


    MyStack.reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.print();


    MyStack.updateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.print();


    MyStack.insertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.print();



    MyStack.insertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.print();


    MyStack.insertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.print();


    MyStack.clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.print();
   

}

