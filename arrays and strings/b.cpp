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
        
    //shift the elements to one position left
    int first = A[0];
    
    for(int i=0;i<n;i++)
        A[i]=A[i+1];
    
    A[n-1]=first;

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
        
    

}
