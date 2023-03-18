//
// Created by Youssef Moataz on 3/17/2023.
//
#include "SortingAlgorithmsHeader.h"

namespace sortlib {

    template<typename T>
    void insertionSort(T data[], int n) {
        T temp;
        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (data[i] < data[j]) {
                    temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                    i--;
                }
            }
        }


    }

    template<typename T>
    void selectionSort(T arr[], int size) {
        int least_index;
        for (int i = 0; i < size; i++) {
            least_index = i;
            for (int j = i; j < size; j++) {
                if (arr[j] <= arr[least_index]) {
                    least_index = j;
                }
            }
            swap(arr[i], arr[least_index]);
        }
    }

    template<typename T>
    void bubbleSort(T arr, int size) {
        for (int i = size - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j] >= arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    template<typename T>
    void shellSort(T *arr, int n) {

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
    void mergeSort(T arr[], int L, int R) {
        if (L < R) {
            int m = L + (R - L) / 2;
            mergeSort(arr, L, m);
            mergeSort(arr, m + 1, R);
            Merge(arr, L, R, m);
        }
    }

    template<typename T>
    void Merge(T arr[], int L, int R, int m) {
        int n1 = m - L + 1, n2 = R - m;
        int Larr[n1], Rarr[n2];
        for (int i = 0; i < n1; i++) {
            Larr[i] = arr[L + i];
        }
        for (int i = 0; i < n2; i++) {
            Rarr[i] = arr[m + i + 1];
        }
        int i = 0, j = 0, k = L;
        while (i < n1 && j < n2) {
            if (Larr[i] < Rarr[j]) {
                arr[k] = Larr[i];
                i++;
            } else {
                arr[k] = Rarr[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = Larr[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = Rarr[j];
            j++;
            k++;
        }
    }

    template<typename T>
    void quickSort(T arr[], int l, int r) {
        if (r <= l) {
            return;
        }
        int i = partition(arr, l, r);

        quickSort(arr, l, i - 1);
        quickSort(arr, i + 1, r);
    }

    template<typename T>
    int partition(T arr[], int l, int r) {
        int pivot = l, k = l;
        for (int i = l + 1; i <= r; i++) {
            if (arr[pivot] <= arr[i]) {
                continue;
            } else {
                k++;
                swap(arr[k], arr[i]);
            }
        }
        swap(arr[k], arr[pivot]);
        return k;
    }

    template<typename T>
    void countingSort(T *arr, int n) {

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

}