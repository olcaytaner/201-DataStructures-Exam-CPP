//
// Created by Olcay Taner YILDIZ on 6.05.2023.
//

#include "DisjointSet.h"

DisjointSet::DisjointSet(int *elements, int count) {
    sets = new Set[count];
    for (int i = 0; i < count; i++){
        sets[i] = Set(elements[i], i);
    }
    this->count = count;
}

DisjointSet::~DisjointSet() {
    delete[] sets;
}

int DisjointSet::findSetRecursive(int index) {
    int parent = sets[index].getParent();
    if (parent != index){
        return findSetRecursive(parent);
    }
    return parent;
}

int DisjointSet::findSetIterative(int index) {
    int parent = sets[index].getParent();
    while (parent != index){
        index = parent;
        parent = sets[index].getParent();
    }
    return parent;
}

DisjointSet::DisjointSet(int count) {
    sets = new Set[count];
    for (int i = 0; i < count; i++){
        sets[i] = Set(i, i);
    }
    this->count = count;
}

void DisjointSet::unionOfSets(int index1, int index2) {
    int x = findSetIterative(index1);
    int y = findSetIterative(index2);
    if (sets[x].getDepth() < sets[y].getDepth()){
        sets[x].setParent(y);
    } else {
        sets[y].setParent(x);
        if (sets[x].getDepth() == sets[y].getDepth()){
            sets[x].incrementDepth();
        }
    }
}

int *DisjointSet::getSetWithIndex(int index) {
    return nullptr;
}

void DisjointSet::unionOfSets(int *indexList, int N) {

}

int DisjointSet::numberOfTriplets() {
    return 0;
}

int* DisjointSet::grandChildren(int index) {
    return nullptr;
}

int* DisjointSet::numberOfDescendants(int index) {
    return nullptr;
}

int DisjointSet::numberOfSurvivors(int count, int* whoBites, int* whoWasBitten, int size) {
    return 0;
}

void DisjointSet::descendants(int current, int* list, int& index) {

}

void DisjointSet::union2(int index1, int index2, int index3){
}

int DisjointSet::combine(int N, int* left, int* right ) {
    return 0;
}

int * DisjointSet::ascendants(int index) {
    return nullptr;
}

bool DisjointSet::isValid() {
    return true;
}

void DisjointSet::ascendants(int current, int *list, int &index) {

}

int DisjointSet::value(int index) {
    return 0;
}