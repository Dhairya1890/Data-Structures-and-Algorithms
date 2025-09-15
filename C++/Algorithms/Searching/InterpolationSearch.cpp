#include<iostream>
#include<vector>
using namespace std;

// Interpolation Search is optimized Binary Search, It requires Indexeable, Sorted and uniformly distributed array
// The idea is to find a pos such that it is near to the target to be found
// Taking a pos which returns higher values when the target is near to arr[high]
// and smaller values when the target is near to arr[low].

int InterpolationSearch(vector<int> arr, int low, int high, int target){
    int pos;

    if(low <= high && target >= arr[low] && target <= arr[high]){

        pos = low + (((double)(high - low)) / (arr[high] - arr[low]))*(target - arr[low]);

        if(arr[pos] == target){
            return pos;
        }
        if(arr[pos] < target){
            return InterpolationSearch(arr, pos+1, high, target);
        }
        if(arr[pos] > target){
            return InterpolationSearch(arr, low, pos-1, target);
        }
        return -1;
    }
}

int main(){
    int n;
    cout<<"Enter array size : "<<endl;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter a target : "<<endl;
    cin>>target;

    int index = InterpolationSearch(arr, 0, n-1, target);

    if(index == -1) cout<<"Target not found";
    else cout<<"Found at index : "<<index;
    
    return 0;
}