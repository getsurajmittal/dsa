#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        int min = i;
        for(int j = i+1 ; j < n ; j++){
            if (arr[j] < arr[min])
            min=j;
        }
        if(arr[min]<arr[i])
        swap (arr[min],arr[i]);
    }
}
int main(){
    vector<int> arr = {7,1,4,2,9,6};
    cout << "array before sorting" << endl;
    for(int i : arr){
        cout << i << " ";
    }
    selectionSort(arr);
    cout << endl;
    cout << "array after sorting" << endl;
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}