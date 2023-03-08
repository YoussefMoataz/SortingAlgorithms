#ifndef functions_h
#define functions_h

#include <iostream>

using namespace std;

template<typename T>
class SortAlgorithms {

public:
    SortAlgorithms() = default;

    void insertionSort(T *arr, int n);

    void selectionSort(T *arr, int n);

    void bubbleSort(T *arr, int n);

    void shellSort(T *arr, int n);

    void mergeSort();

    void quickSort();

    void countingSort();

    void radixSort();

    void bucketSort();

};

#endif