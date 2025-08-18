//
// Created by Olcay Taner YILDIZ on 6.05.2023.
//

#ifndef DATASTRUCTURES_CPP_DISJOINTSET_H
#define DATASTRUCTURES_CPP_DISJOINTSET_H


#include "Set.h"
#include "../List/LinkedList.h"

class DisjointSet {
private:
    Set* sets;
    int count;
public:
    DisjointSet(int* elements, int count);
    DisjointSet(int count);
    ~DisjointSet();
    int findSetRecursive(int index);
    int findSetIterative(int index);
    void unionOfSets(int index1, int index2);

    void ascendants(int current, int *list, int &index);
    int* ascendants(int index);
    int combine(int N, int* left, int* right );
    void descendants(int current, int* list, int& index);
    int *getSetWithIndex(int index);
    int* grandChildren(int index);
    LinkedList grandChildren2(int index);
    bool isValid();
    int* numberOfDescendants(int index);
    int numberOfTriplets();
    int numberOfSurvivors(int count, int* whoBites, int* whoWasBitten, int size);
    void union2(int index1, int index2, int index3);
    void unionOfSets(int *indexList, int N);
    void unmerge(int index);
    int value(int index);
};


#endif //DATASTRUCTURES_CPP_DISJOINTSET_H
