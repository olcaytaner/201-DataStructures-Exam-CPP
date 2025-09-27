//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MAXHEAP_H
#define DATASTRUCTURES_CPP_MAXHEAP_H


#include "Heap.h"

class MaxHeap : public Heap{
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
public:
    explicit MaxHeap(int N);
    void update(int k, int newValue) override;

    /**
    * Given the index of a heap node in a binary max heap, write the method in {\bf MaxHeap} class that returns the
    * indexes of its ascendants (parent, grandparent, grandgrandparent, $\ldots$) of this node. The array should contain
    * only that many items not more not less.
     */
    int *ascendants(int index);
    /**
     * Given the index of a heap node in a max-heap, write a method that determines if the subtree rooted from the node
     * with index satisfies the heap-order property. Do not use any class or external methods.
     */
    bool heapOrder(int index);

    /**
     * Write the method in {\bf MaxHeap} class that returns the shortest distance between two nodes in the heap with
     * indexes index1 and index2. Generate the ascendant lists of the nodes with index1 and index2 (You can assume the
     * tree depth is smaller than 100). Compare those lists to solve the problem.
     */
    int shortestDistanceBetWeenNodes(int index1, int index2);

    /**
     * Write the method in MaxHeap class that returns the third maximum number in the heap. Your method should run in
     * {\cal O}(1) time. You are not allowed to use any class method except getData.
     */
    int third();
};


#endif //DATASTRUCTURES_CPP_MAXHEAP_H
