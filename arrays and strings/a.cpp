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
        
        int l=0;
        int h=A[0];
        for(int i=0;i<n;i++)
        {
            if(A[i]>h)
                {
                    l=h;
                    h=A[i];
                }
            if(A[i]>l && A[i]<h)
                l=A[i];
            
        }
    
    cout<<"the second largest number is "<<l;

}
