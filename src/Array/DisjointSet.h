//
// Created by Olcay Taner YILDIZ on 6.05.2023.
//

#ifndef DATASTRUCTURES_CPP_DISJOINTSET_H
#define DATASTRUCTURES_CPP_DISJOINTSET_H


#include "Set.h"

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
    int *getSetWithIndex(int index);
    void unionOfSets(int *indexList, int N);
    int numberOfTriplets();
    int* grandChildren(int index);
    int* numberOfDescendants(int index);
    int numberOfSurvivors(int count, int* whoBites, int* whoWasBitten, int size);
    void descendants(int current, int* list, int& index);
    void union2(int index1, int index2, int index3);
    int combine(int N, int* left, int* right );
    int * ascendants(int index);
    bool isValid();
    void ascendants(int current, int *list, int &index);
    int value(int index);
};


#endif //DATASTRUCTURES_CPP_DISJOINTSET_H
