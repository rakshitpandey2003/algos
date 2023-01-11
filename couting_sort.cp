#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

void countingSort(vector<int>&arr1){
    int max = -1000;
    for(auto i : arr1) if(i>max) max = i;
    vector<int> arr2(max+1 , 0);
    for(auto i : arr1) arr2[i]++;
    for(int i=1;i<=max;i++) arr2[i] += arr2[i-1];
    vector<int> arr3(arr1.size() , 0);
    for(int i=0;i<arr1.size();i++){
        arr3[arr2[arr1[i]]-1] = arr1[i];
    }
    for(int i=0;i<arr3.size();i++){
        arr1[i] = arr3[i];
    }
}

int main()
{
    vector<int> arr = {1,3,5,2,4,7,8,6,9,10};
    countingSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
