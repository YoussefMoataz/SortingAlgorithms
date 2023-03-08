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