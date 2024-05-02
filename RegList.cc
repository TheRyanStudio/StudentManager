#include "RegList.h"


RegList::RegList(): head(nullptr), tail(nullptr) {}

RegList::~RegList() {
    Node * currNode = head;
    Node * nextNode;

    while (currNode != nullptr) {
        nextNode = currNode -> next;
        delete currNode -> data;
        delete currNode;
        currNode = nextNode;
    }
}

RegList::RegList(RegList & otherList, Student * stu): head(nullptr), tail(nullptr) {
    Node * currNode = otherList.head;

    while (currNode != nullptr) {
        if (currNode -> data -> getStudent() == stu) {

            add(currNode -> data);
        }
        currNode = currNode -> next;

    }
}

void RegList::add(Registration * r) {
    Node * newNode;
    Node * prevNode;
    Node * currNode;

    newNode = new Node;
    newNode -> data = r;
    newNode -> next = nullptr;

    currNode = head;
    prevNode = nullptr;

    while (currNode != nullptr) {
        if (r -> lessThan(currNode -> data))
            break;

        prevNode = currNode;
        currNode = currNode -> next;
    }

    if (prevNode == nullptr) {
        head = newNode;
    } else {
        prevNode -> next = newNode;
    }

    if (currNode == nullptr) {
        tail = newNode;
    }

    newNode -> next = currNode;
}

void RegList::cleanData() {
    Node * nextNode;
    Node * currNode = head;

    while (currNode != nullptr) {
        nextNode = currNode -> next;
        delete currNode;
        currNode = nextNode;

    }
    head = nullptr;
    tail = nullptr;
}

void RegList::print() {
    Node * currNode = head;

    while (currNode != nullptr) {

        currNode -> data -> print();
        currNode = currNode -> next;
    }

    if (head != nullptr) {
        cout << "HEAD: ";
        head -> data -> print();
    } else {
        cout << "HEAD: NONE" << endl;
    }

    if (tail != nullptr) {
        cout << "TAIL: ";
        tail -> data -> print();
        cout << endl;
    } else {
        cout << "TAIL: NONE" << endl;
    }
}