//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_QUICKSORT_H
#define DATASTRUCTURES_CPP_QUICKSORT_H


#include "Sort.h"

class QuickSort : public Sort{
private:
    int partition(int* A, int first, int last);
    void quickSort(int* A, int first, int last);
public:
    void sort(int* A, int size) override;

    int minDifference(int* A, int* B, int N);
    void oddsBeforeEvens(int *A, int size);
    void quickTriple(int* A, int N);
    void threePartitionArray(int* A, int N, int X);
};


#endif //DATASTRUCTURES_CPP_QUICKSORT_H
