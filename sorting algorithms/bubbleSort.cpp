#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    bubbleSort(arr);
    cout << "array after sorting" << endl;
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}