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
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }

        }

    }

}

template<typename T>
void SortAlgorithms<T>::shellSort(T *arr, int n) {

    // split the data to half each time (shell)
    for (int shell = n / 2; shell > 0; shell /= 2) {

        // loop from each shell till the end
        for (int i = shell; i < n; ++i) {

            int temp = arr[i];

            int j = i;
            for (; j >= shell; j -= shell) {

                // sort each shell
                if (temp < arr[j - shell]) {
                    arr[j] = arr[j - shell];
                } else {
                    break;
                }

            }
            // place the temp value
            arr[j] = temp;

        }

    }

}

template<typename T>
void SortAlgorithms<T>::mergeSort(T *arr, int l, int r) {

    if (l >= r) {
        return;
    } else {

        int middle = (l + r) / 2;

        mergeSort(arr, l, middle);
        mergeSort(arr, middle + 1, r);
        merge(arr, l, middle, r);

    }

}

template<typename T>
void SortAlgorithms<T>::merge(T *arr, int l, int mid, int r) {

    int lSubArrSize = mid - l + 1;
    int rSubArrSize = r - mid;

    int mainCounter = l;
    int lCounter = 0;
    int rCounter = 0;

//    cout << lSubArrSize << " " << rSubArrSize << endl;

    T leftArray[lSubArrSize];
    T rightArray[rSubArrSize];

    for (int i = 0; i < lSubArrSize; ++i) {

        leftArray[i] = arr[l + i];

    }

    for (int j = 0; j < rSubArrSize; ++j) {

        rightArray[j] = arr[mid + j + 1];

    }

    while (lCounter < lSubArrSize && rCounter < rSubArrSize) {

        if (leftArray[lCounter] <= rightArray[rCounter]) {
            arr[mainCounter] = leftArray[lCounter];
            lCounter++;
            mainCounter++;
        } else {
            arr[mainCounter] = rightArray[rCounter];
            rCounter++;
            mainCounter++;
        }

    }

    while (lCounter < lSubArrSize) {
        arr[mainCounter] = leftArray[lCounter];
        lCounter++;
        mainCounter++;
    }

    while (rCounter < rSubArrSize) {
        arr[mainCounter] = rightArray[rCounter];
        rCounter++;
        mainCounter++;
    }

}