//write a function to take three arguments , one integer n 
//and two one dimensional arrays X and Y of size n , 
//the function shall compute the dot product of the two 
//vectors x and y use this function as a subroutine and find 
//the square of the matrix A (A must be read from file)
// the resultant matrix shall be written back into a new file 
//in the same format.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    cout<<n;
    
    // int A[n][n];
    // int B[n][n];

    // ifstream fin;
    // fin.open("A.txt");
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         fin >> A[i][j];
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //         cout<<A[i][j]<<" ";

    //     cout<<endl; 
    // }
    
    // return 0;
}