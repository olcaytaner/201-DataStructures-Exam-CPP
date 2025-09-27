//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MINDHEAP_H
#define DATASTRUCTURES_CPP_MINDHEAP_H


#include "DHeap.h"

class MinDHeap : public DHeap{
public:
    MinDHeap(int N, int d);

    /**
    * Write a recursive method in {\bf MinDHeap} class which fills the ascendants (including also current) of the
    * HeapNode with index {\em current} to the array list. Use and modify index to store the HeapNodes into correct
    * positions. Your method should run in ${\cal O}(\log N)$ time. You are not allowed to use any class method.
    */
    void ascendants(int current, int *list, int &index);

    /**
     * Write the method in {\bf MinDHeap} class that finds the number of places in the heap, which can be replaced with
     * the given value key.
     */
    int numberOfPlacesToReplace(int key);

    /**
     * Write the method in {\bf MinDHeap} class that returns the sum of the lengths of the change intervals of each
     * node. A change interval of a node $N$ is defined with the minimum and maximum values that can be attained by $N$
     * without changing any other node. For root node, take the minimum as $min$. For leaf nodes, take the maximum as
     * $max$.
     */
    int sumOfMaxChange(int min, int max);
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
    void update(int k, int newValue) override;
};


#endif //DATASTRUCTURES_CPP_MINDHEAP_H
