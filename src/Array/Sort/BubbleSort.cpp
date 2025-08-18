//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#include "BubbleSort.h"

void BubbleSort::sort(int *A, int size) {
    bool exchanged = true;
    while (exchanged){
        exchanged = false;
        for (int i = 0; i < size - 1; i++){
            if (A[i] > A[i + 1]){
                exchanged = true;
                int tmp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = tmp;
            }
        }
    }
}

void BubbleSort::sort2(int *A, int* B, int* C, int N) {

}

void BucketSort::topThreeFrequent(int *A, int N) {

}