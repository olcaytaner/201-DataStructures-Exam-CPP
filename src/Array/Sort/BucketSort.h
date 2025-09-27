//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_BUCKETSORT_H
#define DATASTRUCTURES_CPP_BUCKETSORT_H


#include "Sort.h"
#include "../../List/LinkedList.h"

class BucketSort : public Sort{
private:
    int maxValue;
public:
    explicit BucketSort(int maxValue);
    void sort(int* A, int size) override;

    /**
    * Suppose you are given an array of N integers sorted in increasing order. Write a linear time method to convert
    * this array sorted in decreasing order.
     */
    void convertDecreasingOrder(int* A, int N);

    /**
    * Given an array of N numbers write a function that determines the mode of the array, i.e. the most frequent number.
    * Your function should run in ${\cal O}(N \log N)$ time. You can modify input array A. You can use sort functions
    * in the exam library.
     */
    int mode(int* A, int N);

    /**
     * Write a function that sorts an array of N elements with respect to their first digits. The time complexity of
     * your function should be ${\mathcal O}(N)$.
     */
    void sortFirstDigit(int* A, int N);

    /**
     * Write a method which returns the sorted form of the linked list (as a new linked list), which contains only
     * numbers 1, 2, and 3. Your algorithm should run in linear time $\cal O$($N$).
     */
    LinkedList sortLinkedList(LinkedList list);

    /**
    * Given an array A of N integers, write a function Your function should display the three most frequent elements in
    * the given array A, which is already sorted. Your function must run in ${\cal O}(N)$ time. You should not modify
    * the input array A.
     */
    void topThreeFrequent(int *A, int N);

    /**
    * Given an array A of N integers, write a function Your function should display the two most frequent elements in
    * the given array A, which is already sorted. Your function must run in O(N) time. You can not modify the input
    * array A.
     */
    void topTwoFrequent(int* A, int N);
};


#endif //DATASTRUCTURES_CPP_BUCKETSORT_H
