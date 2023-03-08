#include "functions.cpp"

void printIntArray(int arr[], int n){
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " - ";
    }
    cout << endl;
}

int main(){

    SortAlgorithms<int> sortIntAlgorithms;

    int array1 [10]= {5, 1, 7, 9, 2, 6, 3, 0, 8, 4};

    int n = 10;

    printIntArray(array1, n);

//    sortIntAlgorithms.insertionSort(array1, n);
    sortIntAlgorithms.selectionSort(array1, n);

    printIntArray(array1, n);


    return 0;
}