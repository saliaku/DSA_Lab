#include <iostream>
using namespace std;

int main()
{
    int n;
    int A[100];
    cout<<"enter the value of n: ";
    cin>>n;
    if(n>100 || n<1)
        printf("error");
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter the "<<i+1<<"th number: ";
        cin>>A[i];
    }

    int k;
    cout<<"enter the value of k: ";
    cin>>k;
    if(k<=1 || k>n)
        printf("error");
    
    int B[100];

    //the element in position i is shifted to position i+k mod n 
    for(int i=0;i<n;i++)
    {
        B[(i+k)%n]=A[i];
    }

    for(int i=0;i<n;i++)
        cout<<B[i]<<" ";
}
