/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

void swap(int*a,int*b){
    int temp = *a;
    *a = *b ;
    *b = *a;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    int flag = 0;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            flag = 1;
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
        if(flag == 0) break;
    }
}

int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
