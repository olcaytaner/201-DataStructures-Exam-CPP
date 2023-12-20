//
// Created by Olcay Taner YILDIZ on 25.04.2023.
//

#include "DHeap.h"

DHeap::DHeap(int N, int d) : Heap(N){
    this->d = d;
}


void DHeap::update(int k, int newValue) {
    int oldValue = array[k].getData();
    array[k].setData(newValue);
    if (oldValue > newValue){
        percolateDown(k);
    } else {
        percolateUp(k);
    }
}
