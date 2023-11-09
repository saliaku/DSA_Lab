
//question a modificatin
#include <iostream>
#include <fstream>
using namespace std;

char* reverse(char* p)
{
    char *rev_p=(char*)malloc(sizeof(char)*100);
    int len=0;
    for(int i=0;p[i]!='\0';i++)
    {
        len++;
    }

    for(int i=0;i<len;i++)
    {
        rev_p[i]=p[len-i-1];
    }

    
    return rev_p;
}

int main()
{
    char *p,*q;
    p=(char*)malloc(sizeof(char)*100);
    q-(char*)malloc(sizeof(char)*100);

    
    
    // for(int i=0;i<100;i++)
    // {
    //     if(cin.peek() == '\n') {
    //     // Leave the for loop
    //     break;
    //     }
    //     cin>>p[i];
    // }
    fstream infile("Str_1.dat");
    infile>>p;
    // cin.getline(p, 100);
    

    q=reverse(p);

    for(int i=0;q[i]!='\0';i++)
    {
        cout<<q[i];
    }
    
}


