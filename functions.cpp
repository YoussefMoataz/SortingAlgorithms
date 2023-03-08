#include "functions.h"

template<typename T>
void SortAlgorithms<T>::insertionSort(T *arr, int n){

    for (int i = 1, j; i < n; ++i) {

        T temp = arr[i];

        for (j = i; j > 0 && temp < arr[j-1]; j--) {
            arr[j] = arr[j-1];
        }

        arr[j] = temp;

    }

}