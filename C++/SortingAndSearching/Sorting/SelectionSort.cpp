// Selection Sort is an Comparison based sorting algorithm. 
// It finds the smallest element in the array and swaps it with the first element.
// It repeatedly finds the next smallest element from the unsorted part ans swaps it with the first element of the unsorted element

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);


    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n-1; i++){  //Outer loop runs n - 1 times
        int minIndex = i;   // We assume the first element to be the smallest
        // Now we will check if there is any element smaller than the first element
        for(int j = i+1; j<n; j++){  // Inner Loop always starts from i+1 and runs till n
            if(arr[j] < arr[minIndex]){
                minIndex = j;  // Update the index of the smallest element
            }
        }
            swap(arr[i], arr[minIndex]);  // Swap the first element with the smallest element
    }

    for(int nums : arr){
        cout<<nums<<" ";
    }
    return 0;
}