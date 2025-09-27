//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#ifndef DATASTRUCTURES_CPP_TREE_H
#define DATASTRUCTURES_CPP_TREE_H


#include <string>

#include "TreeNode.h"

namespace tree {
    class Tree {
    protected:
        TreeNode* root;
        void insertChild(TreeNode* parent, TreeNode* child);
        TreeNode* getParent(TreeNode* node);
    public:
        Tree();
        ~Tree();
        TreeNode* getRoot() const;
        void setRoot(TreeNode* _root);
        TreeNode* recursiveSearch(int value);
        TreeNode* iterativeSearch(int value);
        TreeNode* iterativeMinSearch();
        TreeNode* iterativeMaxSearch();
        TreeNode* recursiveMinSearch();
        TreeNode* recursiveMaxSearch();
        void deleteNode(int value);
        void inorder();
        void preorder();
        void postorder();
        void iterativeInsert(TreeNode* node);
        void recursiveInsert(TreeNode* node);
        void prettyPrint();
        int nodeCountWithStack();
        int nodeCountWithQueue();

        /**
         * Write a non-recursive method which prints the two smallest numbers in the binary search tree: You are not allowed
         * to use any external data structures. (Hint: There are 3 cases: (i) The smallest number is on the left side and
         * it has right descendants, (ii) The smallest number is on the left side and it has no right descendants,
         * (iiii) The smallest number is the root.)
         */
        void bottomTwo();
        /**
         * Write a \textbf{non-recursive} method in Tree class that computes and returns the number of nodes with even
         * values in a binary search tree by using queue. You are only allowed to traverse the tree once.
         */
        int countEvenNodes();
        /**
         * Write a non-recursive method in Tree class that returns the depth of the node containing a given data $X$ in a
         * binary search tree. You are not allowed to use any tree methods, just attributes, constructors, getters and
         * setters.
         */
        int depthOfNode(int X);
        /**
         * T1 and T2 are two binary trees. Write the recursive method in Tree class to determine if T1 is identical to T2.
         */
        bool isIdentical(TreeNode* T1, TreeNode* T2);
        /**
         * Write a nonrecursive method using Stack that finds the difference between the number of leftist nodes and
         * rightist nodes in a binary search tree. A node is leftist~(rightist) if it has only left~(right) child.
         */
        int leftistOrRightist();
        /**
         * Write a non-recursive method in the {\bf Tree} class, which returns the keys on the path as an array, where the
         * path is defined by the current parent as follows: If the parent is odd, go left; otherwise go right. The array
         * should contain only that many items not more not less.
         */
        int *pathList();
        /**
         * Write the non-recursive method in Tree class that computes the products of all keys in a binary search tree by
         * using stack.
         */
        int product();
        /**
         * Write a non-recursive method in Tree class, which first finds the minimum (A) and maximum (B) elements in the
         * tree. The method will then randomly search a number between [A, B] $N$ times and returns the average number of
         * nodes visited in this search. You are not allowed to use any tree methods.
         */
        double simulateSearch(int N);
        /**
         * Write a non-recursive method in Tree class, which sums the keys on the path, where the path is defined by the
         * parameter path as follows: (i) Path consists of 0's and 1's such as 10011. (ii) A 1 represents to go right, a 0
         * represents to go left. If the path is 1011, you start from root, you go first right, then left, then right, then
         * right. If the path is 001, you start from root, you go first left, then left, then right. You will use charAt
         * function in strings.
         */
        int sumOfPath(std::string path);
    };
}


#endif //DATASTRUCTURES_CPP_TREE_H
