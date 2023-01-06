//tower of hanoi

#include <iostream>

using namespace std;
void toh(int n,char from, char to, char aux)
{
    if(n==0) return;
    toh(n-1,from,aux,to);
    cout<<"moving "<<n<<" disk from "<<from<<" to "<<to<<endl;
    toh(n-1,aux,to,from);
}
int main()
{
    int n;
    cout<<"enter the number of disks:";
    cin>>n;
    toh(n,'A','C','B');
    return 0;
}
