//linear search

#include <iostream>

using namespace std;
int search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"enter the no. of inputs:";
    cin>>n;
    int a[n],key;
    cout<<"enter the array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter element to be searched:";
    cin>>key;
    int ans=search(a,n,key);
    if(ans!=-1)
    cout<<"FOUND at "<<ans<<" index";
    else
    cout<<"NOT FOUND";

    return 0;
}
