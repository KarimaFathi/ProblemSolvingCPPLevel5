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

    clsDblLinkedList<int>::node*  nodeToFind = myDblLinkedList.findNode(2);

    if (nodeToFind != NULL)
        cout << "\nNode is found !\n";
    else
        cout << "\nNode is not found.\n";

    myDblLinkedList.insertAfter(nodeToFind,500);
    cout << "\nAfter inserting 500 after 2: \n";
    myDblLinkedList.printList();

   

    myDblLinkedList.insertAtEnd(700);
    cout << "\nAfter inserting 700 at end: \n";
    myDblLinkedList.printList();

    clsDblLinkedList<int>::node* nodeToDelete = myDblLinkedList.findNode(4);

    myDblLinkedList.deleteNode(nodeToDelete);
    cout << "\nAfter deleting 4: \n";
    myDblLinkedList.printList();

    myDblLinkedList.deleteFirstNode();
    cout << "\nAfter deleting first node: \n";
    myDblLinkedList.printList();

    myDblLinkedList.deleteLastNode();
    cout << "\nAfter deleting Last node: \n";
    myDblLinkedList.printList();

}

