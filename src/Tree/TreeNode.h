//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#ifndef DATASTRUCTURES_CPP_TREENODE_H
#define DATASTRUCTURES_CPP_TREENODE_H


class LinkedList;

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

    void accumulate(int* a, int& index);
    void accumulateLeaves(int *a, int &index);
    bool averageOfItsChildren();
    int inBetween(int k1, int k2);
    bool isMirror(TreeNode* left, TreeNode* right);
    int leftist();
    void lessThanX(int* a, int& index, int x);
    int numberOfDuplicates();
    void pathList(LinkedList l);
    int productOfTree();
};


#endif //DATASTRUCTURES_CPP_TREENODE_H
