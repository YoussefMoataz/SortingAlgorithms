#ifndef functions_h
#define functions_h

#include <iostream>

using namespace std;

template<typename T>
class SortAlgorithms {

public:
    SortAlgorithms() = default;

    void selectionSort();

    void insertionSort();

    void bubbleSort();

    void mergeSort();

    void shellSort();

    void quickSort();

    void countingSort();

    void radixSort();

    void bucketSort();

};

#endif