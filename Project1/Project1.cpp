#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;




int main()
{

    clsDblLinkedList <int> myDblLinkedList;
   
    myDblLinkedList.insertAtBeginning(5);
    myDblLinkedList.insertAtBeginning(4);
    myDblLinkedList.insertAtBeginning(3);
    myDblLinkedList.insertAtBeginning(2);
    myDblLinkedList.insertAtBeginning(1);

    myDblLinkedList.printList();
    myDblLinkedList.updateItem(2, 500);
    cout << "\nAfter updating item at index 2 :\n";
    myDblLinkedList.printList();


}

