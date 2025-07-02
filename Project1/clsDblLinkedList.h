#pragma once
#include<iostream>
using namespace std;

template <class T>
class clsDblLinkedList 
{
private:
    int _size = 0;

public:
    class node {
    public:
        T value;
        node* next = NULL;
        node* prev = NULL;
    };

    node* head = nullptr;
    void insertAtBeginning(T val) {
        node* newNode = new node();
        newNode->value = val;
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        _size++;
    }

    void printList() {
        node* current = head;
        cout << "NULL<-->";
        while (current != NULL) {
            cout << current->value << "<-->";
            current = current->next;
        }
        cout << "NULL\n";
    }
    
    node* findNode(T val) {
        node* current = head;
        while (current != NULL) {
            if (current->value == val) {
                return current;
            }
            current = current->next;
        }
        return NULL;
    }

    void  insertAfter(node* prevNode, T val) {
        node* newNode = new node();
        newNode->value = val;
        newNode->prev = prevNode;
        newNode->next = prevNode->next;
        if (prevNode->next != NULL) {
            prevNode->next->prev = newNode;
        }

        prevNode->next = newNode;
        _size++;
    }


    void insertAtEnd(T val) {
        node* newNode = new node();
        newNode->value = val;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            newNode->prev = current;
            current->next = newNode;
        }
        _size++;
    }

    void deleteNode(node* nodeToDel) {


        if (head == NULL || nodeToDel == NULL) {
            return;
        }

        if (nodeToDel->prev == NULL) {
            head = nodeToDel->next;

        }
        if (nodeToDel->next != NULL) {
            nodeToDel->next->prev = nodeToDel->prev;
        }

        if (nodeToDel->prev != NULL) {
            nodeToDel->prev->next = nodeToDel->next;
        }
        delete nodeToDel;
        _size--;
    }


    void deleteFirstNode() {
        if (head == NULL) {
            return;
        }

        node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        _size--;
    }


    void deleteLastNode() {
        if (head == NULL) {
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
        _size--;
    }

    int sizeOfList() {
        return _size;
    }

    bool isEmpty() {
        return _size == 0;
    }

    void clear() {
        while (_size > 0) {
            deleteFirstNode();
        }
    }

    void reverse() {
        //method 1
       /* clsDblLinkedList <T> reversedList;
        node* temp = head;
        while (temp != NULL) {
            reversedList.insertAtBeginning(temp->value);
            temp = temp->next;
        }
        clear();
        head = reversedList.head;
        reversedList.head = nullptr;
        reversedList._size = 0;*/


        //method 2
        node* temp = nullptr;
        node* current = head;
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }
    }

    node* getNode(int index) {
        int counter = 0;
        node* current = head;

        if (index > _size - 1 || index < 0) {
            return nullptr;
        }

        while (current != NULL) {
            if (counter == index) {
                return current;
            }
             current = current->next;
             counter++;
        }
        return nullptr;
    }
};

