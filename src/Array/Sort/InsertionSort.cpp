//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#include "InsertionSort.h"

void InsertionSort::sort(int *A, int size) {
    for (int j = 1; j < size; j++){
        int t = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > t){
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = t;
    }
}

void InsertionSort::insertionSort(LinkedList& l) {

}

int InsertionSort::maxSortLength(int* A, int N) {

}

void InsertionSort::sort2(int *A, int *B, int N) {

}