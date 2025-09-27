//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_INSERTIONSORT_H
#define DATASTRUCTURES_CPP_INSERTIONSORT_H


#include "Sort.h"
#include "../../List/LinkedList.h"

class InsertionSort : public Sort{
public:
    void sort(int* A, int size) override;

    /**
     * Modify the original insertion sort so that it will use the same algorithm but sorts the elements in the linked
     * list $l$. You can only use getPrevious method as an external method except getters and setters.
     */
    void insertionSort(LinkedList& l);

    /**
     * Given an array of $N$ numbers write a function that determines the maximum length of the sorted sublist in the
     * array. A sublist start from index i and continues with indexes i+1, i+2, \ldots, i+k. Your function should run
     * in ${\mathcal O}(N)$ time.
     */
    int maxSortLength(int* A, int N);

    /**
    * Modify the original insertion sort such that uses B as a secondary key. If two elements in A are equal, algorithm
    * uses B as a secondary key. Modify array B also. N is the number of elements in the array. Your modified method
    * should run in ${\cal O}(N^2)$ time.
     */
    void sort2(int *A, int *B, int N);
};


#endif //DATASTRUCTURES_CPP_INSERTIONSORT_H
