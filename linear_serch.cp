/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,3,2,5,7,8};
    int key = 4;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == key) {cout<<"Found"; break;}
        if(i == arr.size() -1) cout<<"not present";
    }
    return 0;
}
