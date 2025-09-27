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

    /**
     * Suppose you are given three sorted arrays A, B, and C. Write a function in MergeSort class that returns the
     * number of elements which are in A or B or C. Assume that all arrays have the same size and the last elements of
     * all three arrays are the same.  Your algorithm should run in ${\cal O}(N)$ time.
     */
    int inAorBorC(const int *A, const int *B, const int *C, int N);

    /**
     * Suppose arrays representing sets A and B are both sorted. Write a method with {\bf linear complexity} in
     * {\bf MergeSort} class that finds if C is the intersection of sets A and B. You are only allowed to use 1 loop.
     */
    bool isIntersection(int *A, int *B, int *C, int sizeA, int sizeB, int sizeC);

    /**
     * Suppose arrays representing sets A and B are both sorted. Write a linear time method that finds if A is a subset
     * of B.
     */
    bool isSubset(int* A, int* B, int size);

    /**
     * Suppose arrays representing sets A and B are both sorted. Write a method with {\bf linear complexity} in
     * {\bf MergeSort} class that finds if A is a superset of B.
     */
    bool isSuperSet(int *A, int *B, int sizeA, int sizeB);

    /**
     * Suppose you are given two sorted arrays A and B. Write a function that finds elements in A $\triangle$
     * B = (A - B) $\cup$ (B - A) (the elements that are in A but not in B and the elements that are in B but not in A)
     * in  ${\cal O}$($N$) time.
     */
    int symmetric(int* A, int* B, int size);
};


#endif //DATASTRUCTURES_CPP_MERGESORT_H
