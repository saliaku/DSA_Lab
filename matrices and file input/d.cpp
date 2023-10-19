#include <iostream>
#include <fstream>
using namespace std;

int sum(int a[][100], int n) {
    int s = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            s += a[i][j];
        }
    }
    return s;
}

int interchange(int a[][100], int n)
{
    int i,j;
    fstream infile("input_interchange.txt");
    cout<<"enter the value of i: "<<endl;
    infile >> i;
    cout<<"enter the value of j: "<<endl;
    infile >> j;
    i--;
    j--;
    for(int k=0;k<n;k++)
    {
        int temp=a[i][k];
        a[i][k]=a[j][k];
        a[j][k]=temp;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<<" "; // read array elements from file
        }
        cout<<endl;
    }
    return 0;
}

int main() {
    int n;
    ifstream infile("input_main.txt"); // open input file
    infile >> n ; // read dimensions from file
    int a[100][100];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            infile >> a[i][j]; // read array elements from file
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<<" "; // read array elements from file
        }
        cout<<endl;
    }
    int total=sum(a,n);
    cout<<"the total ans to qn a:"<<total<<endl;
    interchange(a,n);

    infile.close(); // close input file
    //for doing the question c we need to make a new file and then read the values from that file
    //we can store them in seperate variable and then pass them to the function as in the previous question
    

   
    return 0;
}
