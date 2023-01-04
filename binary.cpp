//binary search

#include <iostream>

using namespace std;
int search(int a[],int n,int key)
{
    int l=a[0],r=a[n-1];
    
    while(l<=r)
    {
       int mid=l+(r-l)/2;
       if(a[mid]==key)
       return mid;
       else if(key>a[mid])
       l=mid+1;
       else if(key<a[mid])
       r=mid-1;
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
