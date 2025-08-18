//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MERGESORT_H
#define DATASTRUCTURES_CPP_MERGESORT_H


#include "Sort.h"

class MergeSort : public Sort{
private:
    void merge(int* A, int start, int middle, int end);
    void mergeSort(int* A, int first, int last);
public:
    void sort(int* A, int size) override;
    bool isSuperSet(int *A, int *B, int sizeA, int sizeB);
    bool isIntersection(int *A, int *B, int *C, int sizeA, int sizeB, int sizeC);
    int inAorBorC(const int *A, const int *B, const int *C, int N);
};


#endif //DATASTRUCTURES_CPP_MERGESORT_H
