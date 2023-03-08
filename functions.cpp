#include "functions.h"

template<typename T>
void SortAlgorithms<T>::insertionSort(T *arr, int n) {

    for (int i = 1, j; i < n; ++i) {

        T temp = arr[i];

        for (j = i; j > 0; j--) {

            // shift all elements greater than temp after temp
            if (temp < arr[j - 1]) {
                arr[j] = arr[j - 1];
            } else {
                break;
            }

        }

        // place the temp to its sorted position
        arr[j] = temp;

    }

}

template<typename T>
void SortAlgorithms<T>::selectionSort(T *arr, int n) {

    for (int i = 0, j, smallest; i < n - 1; ++i) {

        for (j = i + 1, smallest = i; j < n; j++) {

            // find the smallest unsorted element
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }

        }
        // swap the current element with the smallest element
        swap(arr[smallest], arr[i]);

    }

}

template<typename T>
void SortAlgorithms<T>::bubbleSort(T *arr, int n) {

    for (int i = 0; i < n - 1; ++i) {

        for (int j = n - 1; j > i; --j) {

            // swap each element with its previous element if the previous is smaller
            if (arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }

        }

    }

}