//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_INSERTIONSORT_H
#define DATASTRUCTURES_CPP_INSERTIONSORT_H


#include "Sort.h"

class InsertionSort : public Sort{
public:
    void sort(int* A, int size) override;
    void insertionSort(LinkedList& l);
    int maxSortLength(int* A, int N);
    void sort2(int *A, int *B, int N);
};


#endif //DATASTRUCTURES_CPP_INSERTIONSORT_H
