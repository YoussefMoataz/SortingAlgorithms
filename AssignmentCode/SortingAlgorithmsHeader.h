//
// Created by Youssef Moataz on 3/17/2023.
//

#ifndef SORTINGALGORITHMS_SORTINGALGORITHMSHEADER_H
#define SORTINGALGORITHMS_SORTINGALGORITHMSHEADER_H

namespace sortlib {
// Hassan
    template<typename T>
    void insertionSort(T *arr, int n);

// Mohamed
    template<typename T>
    void selectionSort(T *arr, int n);

// Mohamed
    template<typename T>
    void bubbleSort(T *arr, int n);

// Youssef
    template<typename T>
    void shellSort(T *arr, int n);

// Hassan
    template<typename T>
    void merge(T *arr, int l, int mid, int r);

// Hassan
    template<typename T>
    void mergeSort(T *arr, int l, int r);

// Mohamed
    template<typename T>
    int partition(T *arr, int l, int r);

// Mohamed
    template<typename T>
    void quickSort(T *arr, int l, int r);

// Youssef
    template<typename T>
    void countingSort(T *arr, int n);

}

#endif //SORTINGALGORITHMS_SORTINGALGORITHMSHEADER_H
