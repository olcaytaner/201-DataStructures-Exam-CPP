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
    int mode(int* A, int N);
    void topTwoFrequent(int* A, int N);
    LinkedList sortLinkedList(LinkedList list );
};


#endif //DATASTRUCTURES_CPP_BUCKETSORT_H
