#include<iostream>
using namespace std;
int main()
{
    int i,j,n,f0,f,f1;
    cout<<"\nEnter the value of n\n";
    cin>>n;
    f0=-1;
    f1=1;
    i=1;
    while(i<=n)
        {
            f=f0+f1;
    cout<<" " <<f;
    f0=f1;
    f1=f;
    i++;  }
    }
