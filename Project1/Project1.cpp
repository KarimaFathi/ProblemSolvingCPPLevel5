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



    myDynamicArray.deleteItemAt(3);
    cout << "\nArray after deleting item at index 3 : ";
    myDynamicArray.printList();

    system("pause>0");

}

