#include <iostream>
using namespace std;

int main()
{
    int A[100][100];
    int n;
    cout<<"enter the value of n ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"enter the value in "<<i+1<<"X"<<j+1<<" in the matrix ";
            cin>>A[i][j];
        }
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout<<"enter the value in "<<i<<"X"<<j<<"in the matrix";
            sum+=A[i][j];
        }
        cout<<"\n";
    }

    cout<<"the sum of all the vavlues "<<sum;
}