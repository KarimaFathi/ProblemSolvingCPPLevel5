#include <iostream>
#include "clsMyStack.h"
using namespace std;




int main()
{
    clsMyStack <int> MyStack;

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

    //Extension #1
    cout << "\n\n Item(2) : " << MyStack.getItem(2);

    //Extension #2
    MyStack.reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.print();

    //Extension #3
    MyStack.updateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.print();

    //Extension #4
    MyStack.insertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.print();


    //Extension #5
    MyStack.insertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.print();

    //Extension #6
    MyStack.insertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.print();

    //Extension #7
    MyStack.clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.print();

    system("pause>0");

}

