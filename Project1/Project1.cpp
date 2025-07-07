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



    myDynamicArray.deleteFirstItem();
    cout << "\nArray after deleting first item : ";
    myDynamicArray.printList();

    cout << "\nArray's size : " << myDynamicArray.size();


    myDynamicArray.deleteLastItem();
    cout << "\nArray after deleting last item : ";
    myDynamicArray.printList();

    cout << "\nArray's size : " << myDynamicArray.size();

    system("pause>0");

}

