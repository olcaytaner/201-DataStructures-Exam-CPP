//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#ifndef DATASTRUCTURES_CPP_TREENODE_H
#define DATASTRUCTURES_CPP_TREENODE_H
#include "Queue.h"


class LinkedList;

namespace tree {
    class TreeNode {
    protected:
        TreeNode* left;
        TreeNode* right;
        int data;
    public:
        TreeNode(int data);
        ~TreeNode();
        int getData() const;
        void setData(int data);
        TreeNode* getLeft() const;
        TreeNode* getRight() const;
        void setLeft(TreeNode* _left);
        void setRight(TreeNode* _right);
        TreeNode* recursiveSearch(int value);
        TreeNode* recursiveMinSearch();
        TreeNode* recursiveMaxSearch();
        void preorder();
        void inorder();
        void postorder();
        void prettyPrint(int level);
        void recursiveInsert(TreeNode* node);

        /**
         * Write a recursive method in {\bf TreeNode} class that accumulates all contents (integers as data field) in the
         * tree in array a, where the values in the array are will be sorted. Use and modify index to store the integers
         * into correct positions. Your method should run in ${\cal O}(N)$ time.
         */
        void accumulate(int* a, int& index);
        /**
         * Write the recursive method in TreeNode class which accumulates the contents (integer as data field) of all leaf
         * nodes in queue. For queue, you are only allowed to use enqueue function. You should use array  implementation
         * for the queue in this question.
         */
        void accumulateLeafNodes(Queue queue);
        /**
         * Write a recursive method in {\bf TreeNode} class that accumulates all leaf contents in the tree in array a, where
         * the values in the array are will be sorted. Use and modify index to store the integers into correct positions.
         * Your method should run in ${\cal O}(N)$ time.
         */
        void accumulateLeaves(int *a, int &index);
        /**
         * Write a recursive method which returns true if there is at least one node which is the average of its children
         * (left and right children must exist).
         */
        bool averageOfItsChildren();
        /**
         * Write a recursive method in TreeNode class which returns the number of nodes in the tree that satisfy the
         * following property: The node's key is the average of its children (left and right children).
         */
        int averages();
        /**
         * Write the recursive method in TreeNode class, which collects all values in all nodes in the tree in a sorted
         * manner. You are not allowed to use any tree methods.
         */
        int* collectNodes();
        /**
         * Write a \textbf{recursive} method in TreeNode Class given a binary search tree (BST) and an array of integers
         * representing a potential path. This method should return {$true$} if the sequence of values in the path array
         * matches a valid path from the current node down to a node in the BST, and {$false$} otherwise. Hint: you should
         * create an extra array to forward reduced path to the children.
         */
        bool hasPath(int* path);
        /**
         * Write a recursive method , which returns the number of nodes in the binary search tree which have value larger
         * than $X$. Your method should run in ${\cal O}(\log N + K)$ time, where $N$ is total number of nodes and $K$ is
         * the number of nodes which have value larger than $X$ in the tree. Do not use any class or external methods.
         */
        int higherThanX(int X);
        /**
         * Given a binary tree~(not necessarily search tree), implement a method in TreeNode class to check whether an input
         * binary tree is a mirror of itself (symmetric). You may not use any additional data structure or array.
         */
        bool isMirror(TreeNode* left, TreeNode* right);
        /**
         * Write a class method in TreeNode class that returns the number of {\bf leftist} nodes in a binary
         * tree. A node is {\bf leftist} if
         * <ul>
         *     <li>Its left child's data is larger than its right child's data or,</li>
         *     <li>It has only left child.</li>
         * </ul>
         */
        int leftist();
        /**
        * Write a recursive method in TreeNode class that accumulates all nodes in the binary search tree which have value
        * less than $x$ in array a. Use and modify index to store the integers. Your method should run in
        * ${\cal O}(\log N + K)$ time, where $N$ is total number of nodes and $K$ is the number of nodes which have value
        * larger than $x$ in the tree.
         */
        void lessThanX(int* a, int& index, int x);
        /**
         * Write a recursive method in TreeNode class that finds the number of duplicate keys in a binary search tree.
         * Assume that if a key is duplicate, it occurs at most twice. Hint: The duplicate of a key is either the maximum
         * number on its left subtree or the minimum number on its right subtree.
         */
        int numberOfDuplicates();
        /**
         * Write a recursive method in the {\bf TreeNode} class, which returns the keys on the path in the linked list $l$,
         * where the path is defined by the current parent as follows: If the parent is odd, go left; otherwise go right.
         * Assume that the function is called with an empty linked list for the root node.
         */
        void pathList(LinkedList l);
        /**
         * Write a method that computes the products of all keys in a binary search tree.
         */
        int productOfTree();
        /**
         * Write the recursive method in TreeNode class which returns the sum of the keys between p and q in the tree. Your
         * algorithm should run in ${\cal O}(\log N + K)$, where K is the number of nodes which have value larger than p and
         * less than q in the tree.
         */
        int sumOfNodesBetween(int p, int q);
        /**
         * Write a recursive method in TreeNode class that computes the sum of all keys that are less than $X$ in a binary
         * search tree. You are not allowed to use any tree methods, just attributes, constructors, getters and setters.
         */
        int sumOfTree(int X);
    };
};


#endif //DATASTRUCTURES_CPP_TREENODE_H
