//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#ifndef DATASTRUCTURES_CPP_LINKEDLIST_H
#define DATASTRUCTURES_CPP_LINKEDLIST_H


#include "Node.h"

class LinkedList {
protected:
    Node* head;
    Node* tail;
public:
    LinkedList();
    ~LinkedList();
    bool isEmpty();
    Node* getHead();
    void insertFirst(Node* newNode);
    Node* search(int value);
    Node* getPrevious(Node* node);
    string to_string();

    LinkedList(LinkedList *list, int k, int m);
    void addAfterEachNode(int X);
    LinkedList calculateCounts();
    bool containsOnlyTriplicates();
    void deleteBetween(int p, int q);
    void deleteEven();
    void deletePrimes();
    LinkedList difference(const LinkedList& list1, const LinkedList& list2);
    void eratosthenes();
    Node *lastOneWins(int k);
    LinkedList primeDivisors(int N);
    void remove(const LinkedList& list2);
    LinkedList windowedPairwiseGCD(int k);
};


#endif //DATASTRUCTURES_CPP_LINKEDLIST_H
