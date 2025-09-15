#include<iostream>
#include<vector>
using namespace std;


// Binary Search is an Searching algorithm that works on Sorted arrays, it continually divides the array into halves,
// at each step the value of mid is compared to target, It works in logarithmic time O(log n).


int main(){
    cout<<"Enter a array size"<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    bool tf = false;

    int target;
    cout<<"Enter a Target: "<<endl;
    cin>>target;
    while(low <= high){
        int mid = low + (high - low)/2; //Instead of mid = high-low / 2, low + (high - low)/2 handles indexes out of bound.
        
        if(arr[mid] == target){
            cout<<"Found";
            tf = true;
            return 0;
        }
        
        else if(arr[mid] > target){
            high = mid- 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
    }
    if(!tf) cout<<"Not Found";
    return 0;
}

//Problems on Binary Search

// 1. Implement Binary Search on a 1D array
// 2. Implement lower bound

