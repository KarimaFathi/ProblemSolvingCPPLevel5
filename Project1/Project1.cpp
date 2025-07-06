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

    myDynamicArray.resize(2);

    cout << "\nArray items after resizing to 2: ";
    myDynamicArray.printList();

    myDynamicArray.resize(10);

    cout << "\nArray items after resizing to 10: ";
    myDynamicArray.printList();


    system("pause>0");

}

