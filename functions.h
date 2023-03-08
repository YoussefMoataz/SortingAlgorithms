#ifndef functions_h
#define functions_h

#include <iostream>

using namespace std;

template<typename T>
class SortAlgorithms {

private:
    void merge(T *arr, int l, int mid, int r);

    int partition(T *arr, int l, int r);

public:
    SortAlgorithms() = default;

    void insertionSort(T *arr, int n);

    void selectionSort(T *arr, int n);

    void bubbleSort(T *arr, int n);

    void shellSort(T *arr, int n);

    void mergeSort(T *arr, int l, int r);

    void quickSort(T *arr, int l, int r);

    void countingSort(T *arr, int n);

    void radixSort();

    void bucketSort();

};

#endif