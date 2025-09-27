//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MINHEAP_H
#define DATASTRUCTURES_CPP_MINHEAP_H


#include "Heap.h"

class MinHeap : public Heap{
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
public:
    explicit MinHeap(int N);
    void update(int k, int newValue) override;

    /**
     * Write the method in {\bf MinHeap} class that returns the number of nodes in the heap whose children can be
     * swapped without hurting the heap property. Your method should run in ${\cal O}(N)$ time.
     */
    int howManyChildrenCanBeSwapped();

    /**
    * Write the method in {\bf MinHeap} class which returns true if the largest value appears on the leftmost node. You
    * may not use any additional data structures.
     */
    bool isLargestLeftMost();

    /**
     * Given an array of N integers, find the $k$'th maximum of those integers in $\cal O$$(N\log K)$ time. (Hint: Use
     * a min-heap to store $K$ largest elements at a time, in that case the removeMin will return the $k$'th maximum).
     */
    int kthMaximum(int* array, int k);

    /**
     * Write a method in {\bf MinHeap} class that returns how many of the numbers in the list will percolate down to the
     * leaves, if they start from the root of the heap tree. When percolating down in the tree, choose a random child
     * each time. Do not modify the tree while checking. Size represents the size of the array list.
     */
    int numbersPercolateDownToLeaves(int* list, int size);
};


#endif //DATASTRUCTURES_CPP_MINHEAP_H
