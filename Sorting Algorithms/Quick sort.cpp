#include <bits/stdc++.h>
int partion(vector<int>&arr , int low, int high){
    int i=low;
    int j=high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>&arr, int low , int high){
    if (low < high) {
        int pi = partion(arr, low, high);
        qs(arr, low, pi - 1);
        qs(arr, pi + 1, high);
    }
} 
vector<int> quickSort(vector<int> arr)
{
    qs(arr,0,arr.size()-1);
    return arr;
}
