#include "functions.cpp"

void printIntArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " - ";
    }
    cout << endl;
}

int main() {

    SortAlgorithms<int> sortIntAlgorithms;

    int array1[10] = {5, 1, 7, 9, 2, 6, 3, 0, 8, 4};
    int array2[5] = {4, 1, 3, 4, 3};

    int n1 = 10;
    int n2 = 5;

//    printIntArray(array1, n1);
//    printIntArray(array2, n2);

//    sortIntAlgorithms.insertionSort(array1, n1);
//    sortIntAlgorithms.selectionSort(array1, n1);
//    sortIntAlgorithms.bubbleSort(array1, n1);
//    sortIntAlgorithms.shellSort(array1, n1);
//    sortIntAlgorithms.mergeSort(array1, 0, n1 - 1);
//    sortIntAlgorithms.quickSort(array1, 0, n1 - 1);
//    sortIntAlgorithms.countingSort(array2, n2);

//    printIntArray(array1, n1);
//    printIntArray(array2, n2);


    return 0;
}