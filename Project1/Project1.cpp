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


    cout << "\nItem at index 1 : " << myDynamicArray.getItem(1);
    

    myDynamicArray.reverse();

    cout << "\nArray items after reversing: ";
    myDynamicArray.printList();

    myDynamicArray.clear();

    cout << "\nArray after clearing it : ";
    myDynamicArray.printList();


    system("pause>0");

}

