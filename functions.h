#ifndef functions_h
#define functions_h

#include <iostream>

using namespace std;

template<typename T>
class SortAlgorithms {

public:
    SortAlgorithms() = default;

    void selectionSort(T *arr, int n);

    void insertionSort(T *arr, int n);

    void bubbleSort();

    void mergeSort();

    void shellSort();

    void quickSort();

    void countingSort();

    void radixSort();

    void bucketSort();

};

#endif