/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int fibonnaci(int n){
    if(n==0) return 0;
    if(n == 1 || n == 2) return 1;
    else return fibonnaci(n-1) + fibonnaci(n-2);
}

int main()
{
    //cout<<"Hello World";
    int n;
    cout<<"enter the number of term you want : ";
    cin>>n;
    int j = fibonnaci(n);
    cout<< "ans is "<<j;
    return 0;
}
