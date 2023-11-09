#include <iostream>
using namespace std;

int nCr(int n,int r)
{
    if(n==r || r==0)
        return 1;
    return nCr(n-1,r-1)+nCr(n-1,r);
}


int main()
{
    int n,r;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the value of r: ";
    cin>>r;

    cout<<nCr(n,r);

    return 0;

}