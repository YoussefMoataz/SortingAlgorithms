/*
 * By: Youssef Moataz
 * Date: Jun 1, 2023
 */

#include "SortingFunctions.h"

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

template<typename T>
void SortAlgorithms<T>::quickSort(T *arr, int l, int r) {

    if (l >= r) {
        return;
    } else {

        int pivot = partition(arr, l, r);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);

    }

}

template<typename T>
int SortAlgorithms<T>::partition(T *arr, int l, int r) {

    T item = arr[l];

    int i = l;

    for (int j = l + 1; j <= r; ++j) {

        if (arr[j] < item) {
            i++;
            swap(arr[i], arr[j]);
        }

    }
    swap(arr[i], arr[l]);

    return i;

}

template<typename T>
void SortAlgorithms<T>::countingSort(int *arr, int n) {

    T max = arr[0];

    // find the maximum value
    for (int m = 0; m < n; ++m) {
        if (arr[m] > max) {
            max = arr[m];
        }
    }

    T count[max + 1];

    // set count to zeroes
    for (int i = 1; i <= max; ++i) {
        count[i] = 0;
    }

    // count the values
    for (int j = 0; j < n; ++j) {
        count[arr[j]] += 1;
    }

    // apply cumulative sum
    for (int k = 2; k <= max; ++k) {
        count[k] += count[k - 1];
    }

    T sorted[n];
    // place every element in its sorted position
    for (int i = n - 1; i >= 0; --i) {
        sorted[count[arr[i]] - 1] = arr[i];
        count[arr[i]] -= 1;
    }

    // return elements to the main array
    for (int i = 0; i < n; ++i) {
        arr[i] = sorted[i];
    }

}
