//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MAXDHEAP_H
#define DATASTRUCTURES_CPP_MAXDHEAP_H


#include "DHeap.h"

class MaxDHeap : public DHeap{
public:
    MaxDHeap(int N, int d);
    int howManyPairCanBeSwapped();
    int third();
    void descendants(int current, int* list, int& index);
    int descendants(int no, int level );
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
    void update(int k, int newValue) override;
};


#endif //DATASTRUCTURES_CPP_MAXDHEAP_H
