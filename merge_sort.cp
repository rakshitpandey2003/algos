#include <iostream>
#include <vector> 
using namespace std;

void merge (vector<int> &arr , int l , int mid , int r){
    int n1 = mid - l +1;
    int n2 = r - mid;
    vector<int> arr1(n1,0);
    vector<int> arr2(n2,0);
    for(int i=0;i<n1;i++) arr1[i] = arr[i+l];
    for(int i=0;i<n2;i++) arr2[i] = arr[i+mid+1];
    
    int i=0;
    int j=0;
    int k = l;
    
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergesort(vector<int> &arr , int l , int r){
    if(l >= r) return;
    int mid = l+(r-l)/2;
    mergesort(arr , l , mid);
    mergesort(arr , mid+1 , r);
    merge(arr , l , mid , r );
}

int main()
{
    //cout<<"Hello World";
    vector<int> arr = {1,3,5,2,4,7,8,6,9,10};
    mergesort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
