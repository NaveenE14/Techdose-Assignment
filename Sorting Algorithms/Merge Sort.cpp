void merge( vector<int>&arr , int low , int mid , int high) {
    int a=low,b=mid+1;
    vector<int>temp;
    while(a<=mid and b<=high){
        if(arr[a] < arr[b]){
            temp.push_back(arr[a]);
            a++;        
        }
        else{
            temp.push_back(arr[b]);
            b++;
        }
    }
    while(a<=mid){
        temp.push_back(arr[a]);
        a++;
    }
    while(b<=high){
        temp.push_back(arr[b]);
        b++;
    }
    int c=0;
    for(int i=low;i<=high;i++){
        arr[i]=temp[c++];
    }
}


void divide(vector<int> &arr , int low , int high){
    if(low==high) return;
    int mid=low+(high-low)/2;
    divide(arr,low,mid);
    divide(arr,mid+1,high);
    merge(arr,low,mid,high);
}


void mergeSort(vector < int > & arr, int n) {
    divide(arr,0,arr.size()-1);
}
