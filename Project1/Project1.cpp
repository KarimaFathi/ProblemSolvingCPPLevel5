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
    clsDblLinkedList<int>::node* N = myDblLinkedList.getNode(0);
    cout << "\nThe value of the node is :" << N->value;
}

