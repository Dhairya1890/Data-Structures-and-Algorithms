//Time COmplexity : O(n log n)
// Space Complexity : O(n)
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r){
    
    int n1 = mid - l + 1;
    int n2 = r - mid;

    //Create two temp arrays

    vector<int> left(n1);
    vector<int> right(n2);

    //Copy data to temp Vectors

    for(int i = 0; i<n1; i++){
        left[i] = arr[l+1];
    }
    for(int j = 0; j<n2; j++){
        right[j] = arr[mid+1+j];
    }

    int i = 0, j = 0;
    int k = l;

    // merge the two temp vectors back to arr

    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k] = left[i]; 
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = right[j];
        j++;
        k++;
    }

}

void mergeSort(vector<int> &arr, int l, int r){
    if(l<r){
        int mid = l + (r - l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l , mid, r);
    }
    return;
}



int main(){

    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i = 0; i<n; i++){
    //     cin>>arr[i];
    // }

    vector<int> arr = {34,54,23,6,76,34};
    int n = arr.size();

    cout<<"Before Merge Sort"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr, 0, n-1);
    cout<<"After Merge Sort"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}