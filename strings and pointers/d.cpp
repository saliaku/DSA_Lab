    #include <iostream>
    #include <fstream>
using namespace std;

char* function(char* x, char* y)
{
    char *z=(char*)malloc(sizeof(char)*100);

    int c=0;
    int chumma;
    for(int i=0;x[i]!='\0';i++)
    {
        for(int j=0;y[j]!='\0';j++)
        {
            if(x[i]==y[j])
            {
                goto hello;
            }
        }

        z[c]=x[i];
        c++;
        hello:
        chumma++;
    }
    //cout<<"hello function";
    return z;

}


int main()
{
    char *p,*q;
    p=(char*)malloc(sizeof(char)*100);
   
    
    char ** A;
    char ** B;

    // for(int i=0;i<100;i++)
    // {
    //     if(cin.peek() == '\n') {
    //     // Leave the for loop
    //     break;
    //     }
    //     cin>>p[i];
    // }

    // cin.ignore(1);

    // q=(char*)malloc(sizeof(char)*100);
    // //cout<<"hello1";

    // for(int i=0;i<100;i++)
    // {
    //     if(cin.peek() == '\n') {
    //     // Leave the for loop
    //     break;
    //     }
    //     cin>>q[i];
    // }

    fstream infile1("Str_1.dat");
    

    for( int i=0 ; i<100 ; i++ )
    {
        for(int j=0;j<100;j++)
        {
           
            infile1>>A[i][j];
        }
    }

    fstream infile2("Str_2.dat");
    

    for( int i=0 ; i<100 ; i++ )
    {
        for(int j=0;j<100;j++)
        {
            infile2>>B[i][j];
        }
    }

    for( int i=0 ; i<100 ; i++ )
    {
        for(int j=0;j<100;j++)
        {
           
            cout<<A[i][j];
        }
    }

    return 0;

}
    
