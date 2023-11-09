#include <iostream>
using namespace std;

int permutation(int i)
{
    if(i==1)
        return 1;
    else
        return i*permutation(i-1);
}

int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"the permutatin of "<<i<<" is ";
        int p=permutation(i);
        cout<<p<<"\n";
    }
}