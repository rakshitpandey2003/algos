#include <iostream>
#include <vector> 
#include <algorithm>
#include <cstdlib>
#include <time.h>
using namespace std;

int partition(vector<int> &arr , int l , int r){
    int pivot = arr[r];
    int i = l -1;
    for(int j=l;j<r;j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[++i] , arr[r]);
    return i;
}
int partition_r(vector<int> &arr , int l , int r){
    srand(time(NULL));
    int pivot = l + rand()%(r-l);
    swap(arr[pivot] , arr[r]);
    return partition(arr,l , r);
}
void quicksort(vector<int> &arr , int l , int r){
    if(l >= r) return;
    int pi = partition_r(arr , l , r);
    quicksort(arr , l , pi-1);
    quicksort(arr , pi+1 , r);
}

int main()
{
    //cout<<"Hello World";
    vector<int> arr = {1,3,5,2,4,7,8,6,9,10};
    quicksort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
