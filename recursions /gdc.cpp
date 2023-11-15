#include <iostream>
using namespace std;

int gcd(int n,int m)
{
    int k;
    int g=1;
    if(n<m)
        k=n;
    else    
        k=m;

    for(int i=1;i<k;i++)
    {
        if(n%k==0 && m%k==0)
            g=k;

    }

    return k;

}

int main()
{
    int n,m;
    cout<<"enter the value of n and m ";
    cin>>n>>m;
    
    int g=gcd(n,m);

    cout<<"the gcd of the two numbers is ";
    cout<<g<<"\n";

    return 0;
}