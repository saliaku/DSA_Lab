#include <iostream>
using namespace std;


int largest(int A[],int n)
{
    if(n==1)
        return A[0];
    return max(A[n-1],largest(A,n-1));
}


int main()
{
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    int A[n];
    for(int i=0 ;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<"th number: ";
        cin>>A[i];
    }

    int max=largest(A,n);
    cout<<max;
    return 0;
}