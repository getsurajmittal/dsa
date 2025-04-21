#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0 ; i<n ; i++){
        int j=i;
        while(j>0 && (arr[j-1]>arr[j])){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    vector<int> arr = {7,1,4,2,9,6};
    cout << "array before sorting" << endl;
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    insertionSort(arr);
    cout << "array after sorting" << endl;
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}