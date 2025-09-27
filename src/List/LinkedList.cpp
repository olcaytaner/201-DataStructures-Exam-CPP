//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::insertFirst(Node *newNode) {
    if (isEmpty()) {
        tail = newNode;
    }
    newNode->setNext(head);
    head = newNode;
}

Node *LinkedList::search(int value) {
    Node *tmp = head;
    while (tmp != nullptr) {
        if (value == tmp->getData()) {
            return tmp;
        }
        tmp = tmp->getNext();
    }
    return nullptr;
}

LinkedList::~LinkedList() {
    Node *tmp = head;
    Node *next;
    while (tmp != nullptr) {
        next = tmp->getNext();
        delete tmp;
        tmp = next;
    }
}

string LinkedList::to_string() {
    Node *tmp = head;
    string result;
    while (tmp != nullptr) {
        result += tmp->to_string() + " ";
        tmp = tmp->getNext();
    }
    return result;
}

Node *LinkedList::getPrevious(Node *node) {
    Node *tmp = head;
    Node *previous = nullptr;
    while (tmp != node) {
        previous = tmp;
        tmp = tmp->getNext();
    }
    return previous;
}

bool LinkedList::isEmpty() {
    return head == nullptr;
}

Node *LinkedList::getHead() {
    return head;
}

Node *LinkedList::lastOneWins(int k) {
    return nullptr;
}

LinkedList LinkedList::primeDivisors(int N) {
    return LinkedList();
}

void LinkedList::printFibonacciWay(int N) {
}

void LinkedList::addAfterEachNode(int X) {

}

bool LinkedList::containsOnlyTriplicates() {
    return false;
}

void LinkedList::remove(const LinkedList& list2) {

}

void LinkedList::deleteEven() {

}

void LinkedList::deleteKth(int K) {
}

LinkedList::LinkedList(LinkedList *list, int k, int m) {

}

LinkedList LinkedList::windowedPairwiseGCD(int k) {
    return LinkedList();
}

LinkedList LinkedList::zibonacci(int A, int B) {
}

void LinkedList::eratosthenes() {

}

void LinkedList::evenOddSorted() {
}

LinkedList LinkedList::getIndexed(LinkedList list) {
}

LinkedList LinkedList::intersec(LinkedList list1, LinkedList list2) {
}

bool LinkedList::isIncreasingOfSizeK(int k) {
    return false;
}

LinkedList LinkedList::difference(const LinkedList& list1, const LinkedList& list2) {
    return LinkedList();
}

LinkedList LinkedList::calculateCounts() {
    return LinkedList();
}

bool LinkedList::containsOnlyDuplicates() {
    return false;
}

void LinkedList::deleteBetween(int p, int q) {

}

void LinkedList::deletePrimes() {

}