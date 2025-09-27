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

    /**
     * Suppose arrays representing sets A and B are both sorted. Write a linear time method that finds the minimum
     * difference between any element from A and any element from B.
     */
    int minDifference(int* A, int* B, int N);

    /**
     * Implement a modified version of partition algorithm to write a method in QuickSort class which moves the odd
     * numbers before even ones in A in one pass. The algorithm is as follows:
    * At the beginning of the algorithm, let say we have two indexes i and j, showing the first and last elements
    * respectively.
    * While i is less than j,
    * Increment i until you find an odd number.
    * Decrement j until you find an even number.
    * If i $<$ j, swap the contents of i and j.
    * Continue with step 2.
    */
    void oddsBeforeEvens(int *A, int size);

    /**
    * Suppose you are given an array of $N$ integers. Write a single pass algorithm that puts the numbers fully
    * divisible by 3 first, then the numbers which division remains 1, and lastly the numbers which division remains
    * 2 similar to the partition algorithm in QuickSort.
     */
    void quickTriple(int* A, int N);

    /**
    * Suppose you are given A, an unsorted array of N integers, and a number X. Write $O(N)$ algorithm to partition the
    * numbers in the array such that, the numbers that are smaller than X will be in the first part, the numbers that
    * are equal to X will be in the second part, and the numbers that are larger than X will be in the third part. You
    * may not use any additional data structure or array.
     */
    void threePartitionArray(int* A, int N, int X);
};


#endif //DATASTRUCTURES_CPP_QUICKSORT_H
