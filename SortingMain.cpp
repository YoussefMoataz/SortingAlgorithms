/*
 * By: Youssef Moataz
 * Date: Jun 1, 2023
 */

//#include "SortingFunctions.cpp"
#include "SortingAlgorithms.cpp"

template <typename ArrayType>
void printArray(ArrayType arr[], int n, const char *title);

int main() {

    SortAlgorithms<int> sortAlgorithms;

    // ------------------------------------------------------------

    int array1[10] = {5, 1, 7, 9, 2, 6, 3, 0, 8, 4};
    int n1 = 10;

    // print array before sorting
    printArray<int>(array1, n1, "Array 1 - Unsorted");

//    sortIntAlgorithms.insertionSort(array1, n1);
//    sortIntAlgorithms.selectionSort(array1, n1);
//    sortIntAlgorithms.bubbleSort(array1, n1);
//    sortIntAlgorithms.shellSort(array1, n1);
//    sortIntAlgorithms.mergeSort(array1, 0, n1 - 1);
    sortAlgorithms.quickSort(array1, 0, n1 - 1);

    // print array after sorting
    printArray<int>(array1, n1, "Array 1 - Sorted");

    // ------------------------------------------------------------

    int array2[5] = {4, 1, 3, 4, 3};
    int n2 = 5;

    // print int array before count sort
    printArray<int>(array2, n2, "Array 2 - Unsorted");

    sortAlgorithms.countingSort(array2, n2);

    // print int array after count sort
    printArray<int>(array2, n2, "Array 2 - Sorted");

    return 0;
}

template <typename ArrayType>
void printArray(ArrayType arr[], int n, const char *title) {

    cout << title << ":\n";

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " - ";
    }
    cout << endl;
}