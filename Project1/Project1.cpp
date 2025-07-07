#include <iostream>
#include "clsDynamicArray.h"
using namespace std;




int main()
{
 
    clsDynamicArray<int> myDynamicArray(5);

    myDynamicArray.setItem(0, 10);
    myDynamicArray.setItem(1, 20);
    myDynamicArray.setItem(2, 30);
    myDynamicArray.setItem(3, 40);
    myDynamicArray.setItem(4, 50);

    cout << "\nIs Empty ?: " << myDynamicArray.isEmpty();
    cout << "\nArray size : " << myDynamicArray.size();

    cout << "\nArray items : ";
    myDynamicArray.printList();

    cout << endl << endl;
    myDynamicArray.insertAtBeginning(200);
    myDynamicArray.printList(); cout << endl;

    myDynamicArray.insertBefore(2, 400);
    myDynamicArray.printList(); cout << endl;

    myDynamicArray.insertAfter(1, 300);
    myDynamicArray.printList(); cout << endl;

    myDynamicArray.insertAtEnd(500);
    myDynamicArray.printList(); cout << endl;
    system("pause>0");

}

