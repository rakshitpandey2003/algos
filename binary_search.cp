#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,4,5,6,7,8,9,10};
    int key = 11;
    int i=0;
    int j=arr.size()-1;
    int mid;
    while(i<=j){
        mid = i + (j-i)/2;
        if(arr[mid] == key) {cout<<"Found"; return 0;}
        else if(arr[mid] < key) i = mid+1;
        else j = mid-1;
    }
    cout<<"not found";
    return 0;
}
