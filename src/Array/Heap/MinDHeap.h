//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MINDHEAP_H
#define DATASTRUCTURES_CPP_MINDHEAP_H


#include "DHeap.h"

class MinDHeap : public DHeap{
public:
    MinDHeap(int N, int d);

    void ascendants(int current, int *list, int &index);
    int numberOfPlacesToReplace(int key);
    int sumOfMaxChange(int min, int max);
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
    void update(int k, int newValue) override;
};


#endif //DATASTRUCTURES_CPP_MINDHEAP_H
