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

    int index = myDynamicArray.find(30);

    if (index == -1) {
        cout << "\nItem was not found.\n";
    }
    else {
        cout << "\nItem is found at index : " << index;
    }

    myDynamicArray.insertAt(5, 500);
    cout << "\nArray items after inserting item 500 at index 5 : ";
    myDynamicArray.printList();

    cout << "\nArray size : " << myDynamicArray.size();
    system("pause>0");

}

