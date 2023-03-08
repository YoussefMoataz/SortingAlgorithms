#include "functions.h"

template<typename T>
void SortAlgorithms<T>::insertionSort(T *arr, int n){

    for (int i = 1, j; i < n; ++i) {

        T temp = arr[i];

        for (j = i; j > 0; j--) {

            // shift all elements greater than temp after temp
            if(temp < arr[j-1]) {
                arr[j] = arr[j - 1];
            } else{
                break;
            }

        }

        // place the temp to its sorted position
        arr[j] = temp;

    }

}

template<typename T>
void SortAlgorithms<T>::selectionSort(T *arr, int n){

    for (int i = 0, j, smallest; i < n-1; ++i) {

        for (j = i+1, smallest = i; j < n ;j++) {

            // find the smallest element
            if (arr[j] < arr[smallest]){
                smallest = j;
            }

        }
        // swap the current element with the smallest element
        swap(arr[smallest], arr[i]);

    }

}