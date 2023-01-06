//factorial

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;
    int fact=1;
    while(num)
    {
        fact*=num;
        num--;
    }
    
    cout<<"factorail = "<<fact;
    return 0;
}
