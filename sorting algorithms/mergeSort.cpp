#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int right = mid+1;
    int left = low;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<int> &arr, int low, int high){
    if(low>=high)
    return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr = {7,1,4,2,9,6};
    cout << "array before sorting" << endl;
    for(int i : arr){
        cout << i << " ";
    }
    mergeSort(arr,0,arr.size()-1);
    cout << endl;
    cout << "array after sorting" << endl;
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}