//
// Created by Youssef Moataz on 3/17/2023.
//
#include <iostream>
#include <chrono>
#include "SortingAlgorithmsFunctions.cpp"

using namespace std;
using namespace std::chrono;

void printIntArray(int arr[], int n);

int main() {

    int array1[10] = {5, 1, 7, 9, 2, 6, 3, 0, 8, 4};
    int array2[5] = {4, 1, 3, 4, 3};

    int n1 = 10;
    int n2 = 5;

    printIntArray(array1, n1);
//    printIntArray(array2, n2);

    // get start time
    auto start = high_resolution_clock::now();

//    sortlib::insertionSort(array1, n1);
//    sortlib::selectionSort(array1, n1);
//    sortlib::bubbleSort(array1, n1);
//    sortlib::shellSort(array1, n1);
//    sortlib::mergeSort(array1, 0, n1 - 1);
//    sortlib::quickSort(array1, 0, n1 - 1);
//    sortlib::countingSort(array2, n2);

    // get end time
    auto end = high_resolution_clock::now();

    printIntArray(array1, n1);
//    printIntArray(array2, n2);

//    auto executionTime = duration_cast<nanoseconds>(end-start);
//    cout << "Function execution time is : " << executionTime.count() << " nanoseconds";
    auto executionTime = duration_cast<microseconds>(end - start);
    cout << "Function execution time is : " << executionTime.count() << " microseconds";

    return 0;
}

void printIntArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " - ";
    }
    cout << endl;
}