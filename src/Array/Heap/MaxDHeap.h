//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MAXDHEAP_H
#define DATASTRUCTURES_CPP_MAXDHEAP_H


#include "DHeap.h"

class MaxDHeap : public DHeap{
public:
    MaxDHeap(int N, int d);

    /**
     * Given the index of a d-heap node, write a method that returns the number of descendants (children, grandchildren,
     * grandgrandchildren, etc.) of that heap node. Do not use any class or external methods.
     */
    int descendants(int no);

    /**
     * Given index of a d-heap node and a level $l$, write a recursive function that returns the number of descendants
     * at level $l$ of that heap node. Level 1 corresponds to children, Level 2 corresponds grandchildren, Level 3
     * corresponds grand grand children of that heap node.
     */
    int descendants(int no, int level);

    /**
    * Write a recursive method in {\bf MaxDHeap} class which fills the descendants of the HeapNode with index
    * {\em current} to the array list. Use and modify index to store the HeapNodes into correct positions. Your method
    * should run in ${\cal O}(N)$ time.
     */
    void descendants(int current, int* list, int& index);

    /**
    * Write the method in {\bf MaxDHeap} class that returns the number of node pairs in the heap which can be swapped
    * without hurting the heap property. Your method should run in $O(N^2)$ time. You may not use any additional data
    * structures.
     */
    int howManyPairCanBeSwapped();

    /**
     * Write the method in {\bf MaxDHeap} class that returns the third maximum number in the heap. Your method should
     * run in ${\cal O}(d^2)$ time.
     */
    int third();
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
    void update(int k, int newValue) override;
};


#endif //DATASTRUCTURES_CPP_MAXDHEAP_H
