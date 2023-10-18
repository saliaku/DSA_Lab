#include <iostream>
using namespace std;
float mean(int n, int A[])
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }

    float mean = sum/n;

    return mean;
}

float variance(int n,int A[],float mean)
{
    float sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += (A[i] - mean) * (A[i] - mean);
    }
    float variance = sum / (n-1);
    return variance;
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
        
    float avg = mean(n,A);
    float var = variance(n,A,avg);

    cout<<"mean of the array "<<avg<<"\n"<<"variance of the array "<<var;


}
