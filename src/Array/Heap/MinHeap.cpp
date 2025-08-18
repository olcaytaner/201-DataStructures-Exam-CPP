//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#include "MinHeap.h"

void MinHeap::percolateDown(int no) {
    int left, right;
    left = 2 * no + 1;
    right = 2 * no + 2;
    while ((left < count && array[no].getData() > array[left].getData()) ||
           (right < count && array[no].getData() > array[right].getData())){
        if (right >= count || array[left].getData() < array[right].getData()){
            swapNode(no, left);
            no = left;
        } else {
            swapNode(no, right);
            no = right;
        }
        left = 2 * no + 1;
        right = 2 * no + 2;
    }
}

void MinHeap::percolateUp(int no) {
    int parent;
    parent = (no - 1) / 2;
    while (parent >= 0 && array[parent].getData() > array[no].getData()){
        swapNode(parent, no);
        no = parent;
        parent = (no - 1) / 2;
    }
}

void MinHeap::update(int k, int newValue) {
    int oldValue = array[k].getData();
    array[k].setData(newValue);
    if (oldValue < newValue){
        percolateDown(k);
    } else {
        percolateUp(k);
    }
}

MinHeap::MinHeap(int N) : Heap(N) {
}

bool MinHeap::isLargestLeftMost() {
    return true;
}

int MinHeap::howManyChildrenCanBeSwapped() {
    return 0;
}

int MinHeap::numbersPercolateDownToLeaves(int* list, int size) {
    return 0;
}

int MinHeap::kthMaximum(int* array, int k) {
    return 0;
}
