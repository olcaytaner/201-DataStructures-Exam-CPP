//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_BUBBLESORT_H
#define DATASTRUCTURES_CPP_BUBBLESORT_H


#include "Sort.h"

class BubbleSort : public Sort{
public:
    void sort(int* A, int size) override;

    /**
     * Modify the original bubble sort such that uses B as a secondary and C as a ternary key. If two elements in A are
     * equal, algorithm uses B as a secondary key. If also their keys in B are equal, the algorithm will then resort to
     * C array. Do not modify arrays B and C. N is the number of elements in the array. Your modified method should run
     * in ${\cal O}(N^2)$ time.
     */
    void sort2(int *A, int* B, int* C, int N);
};


#endif //DATASTRUCTURES_CPP_BUBBLESORT_H
