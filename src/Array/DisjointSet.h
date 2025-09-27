//
// Created by Olcay Taner YILDIZ on 6.05.2023.
//

#ifndef DATASTRUCTURES_CPP_DISJOINTSET_H
#define DATASTRUCTURES_CPP_DISJOINTSET_H


#include "Set.h"
#include "../List/LinkedList.h"

class DisjointSet {
private:
    Set* sets;
    int count;
public:
    DisjointSet(int* elements, int count);
    ~DisjointSet();
    int findSetRecursive(int index);
    int findSetIterative(int index);
    void unionOfSets(int index1, int index2);

    /**
    * Given in the index of a set as {\em current}, write a recursive method that fills the ascendants (including also
    * current) of that set to the array list. Use and modify index to store the indexes of the sets into correct
    * positions. You are not allowed to use any class method except getParent.
    */
    void ascendants(int current, int *list, int &index);

    /**
     * Given the index of a set, write a function that returns the ancestors (itself, parent, grandparent, etc.). The
     * size of the returning array should be as much as needed.
     */
    int* ascendants(int index);

    /**
     * Rewrite constructor in {\bf DisjointSet} class such that all numbers with a common factor other than 1 will be
     * in the same set. The numbers are from 0 to count - 1.
     */
    explicit DisjointSet(int count);
    /**
    * You are given a set of equalities such as
    * 0=9
    * 1=2
    * 3=5
    * 5=7
    * 9=4
    * 5=4
    * 6=8
    * where numbers correspond to variables. When the equalities are combined, we get
    * 0=9=4=3=5=7
    * 1=2
    * 6=8
    * 3 equalities. Write the function that finds the number of equalities when combined where $N$ represents the number
    * of variables, left and right represent the left and right parts of the equalities.
    */
    int combine(int N, int* left, int* right );

    /**
     * Given in the index of a set as {\em current}, write a recursive method that fills the descendants of that set to
     * the array list. Use and modify index to store the indexes of the sets into correct positions.
     */
    void descendants(int current, int* list, int& index);

    /**
     * Write the method which returns the indexes of all sets in the disjoint set where a set with index $index$ is in
     * that set.
     */
    int *getSetWithIndex(int index);

    /**
     * Given the index of a set, write a method that returns the indexes of its grandchildren as a linked list. Do not
     * use any class or external methods.
     */
    int* grandChildren(int index);
    LinkedList grandChildren2(int index);

    /**
     * Write a method that returns true when the given disjoint set is valid, that is from every node $n$, when the
     * ascendants are traversed, no circularity is observed (that is you do not encounter the node $n$ again).
     */
    bool isValid();

    /**
     * Write the method which returns the descendants (children, grandchildren, grandgrandchildren, etc.) of set with
     * index $index$. Your method should run in ${\cal O}(N)$ time. The size of the returning array should be as much
     * as needed.
     */
    int* numberOfDescendants(int index);

    /**
    * Write the method in {\bf DisjointSet} class that calculates the number of triplet disjoint sets in a disjoint set
    * structure. A disjoint set is a triplet, if the number of sets in that disjoint set is 3. Do not use any class or
    * external methods.
     */
    int numberOfTriplets();

    /**
    * In an unknown world, there are people (zombie) who bites other people (may or may not be zombie). One is converted
    * to a zombie, if he/she was bitten by some other zombie. Given who bites whom in two arrays, identify the number of
    * survivors, that is the number of people who hasn't been bitten yet. Write the static method where whoBites[i] has
    * bitten whoWasBitten[i] correspondingly. Count represents the number of people in the beginning. Size represents
    * the size of the arrays whoBites and whoWasBitten. You are only allowed to use one external Disjoint Set.
     */
    int numberOfSurvivors(int count, int* whoBites, int* whoWasBitten, int size);

    /**
     * Write a function that merges three sets given their indexes. You can use {\em findSet} method, but not the
     * original {\em union} method. Merge the sets such that the resulting merged set will have the minimum depth.
     * Update also the depth if needed.
     */
    void union2(int index1, int index2, int index3);

    /**
     * Write the method that merges $N$ sets given their indexes in the indexList. You should use findSet and the
     * original unionOfSets method. Merge the sets such that the resulting merged set will have the minimum depth. Use
     * an algorithm that sorts the sets according to their depths.
     */
    void unionOfSets(int *indexList, int N);

    /**
     * Given the index of a set $S$, write a method that unmerges (creates disjoint sets of) it. After unmerging, the
     * direct children of $S$ and $S$ itself will be disjoint sets themselves. You don't need to modify the depths. Do
     * not use any class or external methods.
     */
    void unmerge(int index);

    /**
    * Given the index of a set, write a recursive function that finds the value of that set. The value of a node is 1 +
    * maximum value of its children. Any node with no children has value 1. You are not allowed to use any class method
    * except getParent.
    */
    int value(int index);
};


#endif //DATASTRUCTURES_CPP_DISJOINTSET_H
