#include <iostream>
using namespace std;

int function(int n,int i,int j,int A[][100])
{
    for(int k=0;k<n;k++)
    {
        int temp=A[i][k];
        A[i][k]=A[j][k];
        A[j][k]=temp; 
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

int main()
{
    int A[100][100];
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the value of i: ";
    int i;
    cin>>i;
    cout<<"enter the value of j: ";
    int j;
    cin>>j;
    i--;
    j--;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"enter the value in "<<i+1<<"X"<<j+1<<" in the matrix ";
            cin>>A[i][j];
        }
    }

   

    function(n,i,j,A);
}