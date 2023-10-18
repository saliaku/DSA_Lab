

#include <iostream>
using namespace std;


float function(int n,int A[])
{
    float sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum = sum+ (A[i] - A[j]) * (A[i] - A[j]);
        }
    }
    
    return sum;
}

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
        
    float k=function(n,A);
    cout<<"the desired output is "<<k<<"\n";
}

