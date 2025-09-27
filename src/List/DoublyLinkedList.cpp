//
// Created by Olcay Taner YILDIZ on 14.03.2023.
//

#include "DoublyLinkedList.h"

void DoublyLinkedList::insertFirst(DoublyNode *newNode) {
    if (tail == nullptr) {
        tail = newNode;
    } else {
        ((DoublyNode*) head)->setPrevious(newNode);
    }
    newNode->setNext(head);
    head = newNode;
}

DoublyLinkedList * DoublyLinkedList::divideList(int k) {
    return nullptr;
}

void DoublyLinkedList::doubleList() {

}

DoublyLinkedList DoublyLinkedList::getEvenOnes() {
}

bool DoublyLinkedList::isPalindrom() {
    return false;
}

void DoublyLinkedList::removeKthBeforeLast(int K) {
}

void DoublyLinkedList::reverse() {
}

DoublyLinkedList DoublyLinkedList::sortElements() {
}
