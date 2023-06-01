#ifndef sorting_functions_h
#define sorting_functions_h

#include <iostream>

using namespace std;

template<typename T>
class SortAlgorithms {

private:

    /**
     *
     * This is the merge function, used in mergeSort.
     *
     * @param arr The sub-array to be merged.
     * @param l The start index of the sub-array.
     * @param mid The middle index of the sub-array.
     * @param r The end index of the sub-array.
     */
    void merge(T *arr, int l, int mid, int r);

    /**
     *
     * This is the partition function, used in quickSort.
     *
     * @param arr The sub-array to be partitioned.
     * @param l The start index of the sub-array.
     * @param r The end index of the sub-array.
     */
    int partition(T *arr, int l, int r);

public:

    /**
     * Default constructor.
     */
    SortAlgorithms() = default;

    /**
     *
     * This is the implementation of Insertion Sort algorithm on any data type.
     *
     * @attention The array is sorted and kept in the same pointer.
     * @param arr The array to be sorted.
     * @param n The size of the array.
     */
    void insertionSort(T *arr, int n);

    /**
     * This is the implementation of Selection Sort algorithm on any data type.
     *
     * @attention The array is sorted and kept in the same pointer.
     * @param arr The array to be sorted.
     * @param n The size of the array.
     */
    void selectionSort(T *arr, int n);

    /**
     * This is the implementation of Bubble Sort algorithm on any data type.
     *
     * @attention The array is sorted and kept in the same pointer.
     * @param arr The array to be sorted.
     * @param n The size of the array.
     */
    void bubbleSort(T *arr, int n);

    /**
     * This is the implementation of Shell Sort algorithm on any data type.
     *
     * @attention The array is sorted and kept in the same pointer.
     * @param arr The array to be sorted.
     * @param n The size of the array.
     */
    void shellSort(T *arr, int n);

    /**
     * This is the implementation of Merge Sort algorithm on any data type.
     *
     * @attention The array is sorted and kept in the same pointer.
     * @param arr The array to be sorted.
     * @param l The start index of the array (Mostly: 0).
     * @param r The end index of the array (Mostly: Size - 1).
     */
    void mergeSort(T *arr, int l, int r);

    /**
     * This is the implementation of Quick Sort algorithm on any data type.
     *
     * @attention The array is sorted and kept in the same pointer.
     * @param arr The array to be sorted.
     * @param l The start index of the array (Mostly: 0).
     * @param r The end index of the array (Mostly: Size - 1).
     */
    void quickSort(T *arr, int l, int r);

    /**
     * This is the implementation of Counting Sort algorithm on Integer data type.
     *
     * @attention The array is sorted and kept in the same pointer.
     * @param arr The integer array to be sorted.
     * @param n The size of the array.
     */
    void countingSort(int *arr, int n);

};

#endif