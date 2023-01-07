/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    //cout<<"Hello World";
    cout<<"enter the number of term you want : ";
    cin>>n;
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<< "ans is "<<arr[n];
    return 0;
}
