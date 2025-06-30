#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;




int main()
{

    clsDblLinkedList <int> myDblLinkedList;

    if (myDblLinkedList.isEmpty() == true)
        cout << "\nThe list is empty.\n";
    else
        cout << "\nThe list is not empty\n";

    myDblLinkedList.insertAtBeginning(5);
    myDblLinkedList.insertAtBeginning(4);
    myDblLinkedList.insertAtBeginning(3);
    myDblLinkedList.insertAtBeginning(2);
    myDblLinkedList.insertAtBeginning(1);

    cout << "\nLinked list content : ";
    myDblLinkedList.printList();

    if (myDblLinkedList.isEmpty() == true)
        cout << "\nThe list is empty.\n";
    else
        cout << "\nThe list is not empty\n";



}

