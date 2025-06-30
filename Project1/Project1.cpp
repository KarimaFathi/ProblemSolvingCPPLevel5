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

    cout << "\nLinked list content : ";
    myDblLinkedList.printList();

    cout << "\nThe size of the link is : " << myDblLinkedList.sizeOfList();



}

