#include <iostream>
using namespace std;




void towerOFhanoi(int n,char A,char B,char C,int p)
{
    if (n == 1) {
        cout << "Move Disk " << n << " from " << A << " to " << C << endl;
        return;
    }

    towerOFhanoi(n - 1, A, C, B,p);
    cout << "Move Disk " << n << " from " << A << " to " << C << endl;
    if(n==p)
        cout<<"half done\n";
    //towerOFhanoi(n - 1, B, A, C,p-1);
    while(n-1>0)
    {
        towerOFhanoi(n - 1, B, A, C,p-1);
        n--;
    }
    
}



int main()
{
    //n will be the number od disk
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
    char A='A',B='B',C='C';
    
    //the value stored in the array will be the size of the disk
    //bigger the number bigger the disk
    //we need to move disks from A to C

    towerOFhanoi(n,A,B,C,n);


}