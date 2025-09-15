// Insertion Sort is a simple sorting algorithm, It is like sorting playing cards by dividing them into two parts,
// Sorted and Unsorted
// We consider the first element to be sorted, hence we start from the next element i.e Second element
// We compare the first element with the second element, if second is smaller than the first, we swap them
// We move to the third element, compare it with the first and second element and place it in its correct place

// We Repeat this until the entire array is sorted.

//Code Implementation

#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {12,43,12,56,76,34,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}