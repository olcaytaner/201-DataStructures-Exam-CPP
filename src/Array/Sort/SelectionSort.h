//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_SELECTIONSORT_H
#define DATASTRUCTURES_CPP_SELECTIONSORT_H


#include "Sort.h"
#include "../../List/LinkedList.h"

class SelectionSort : public Sort{
public:
    void sort(int* A, int size) override;

    void selectionSort(LinkedList l);
    void sort(LinkedList l);
    int *sortNew(int *A, int *B, int size);
};


#endif //DATASTRUCTURES_CPP_SELECTIONSORT_H
