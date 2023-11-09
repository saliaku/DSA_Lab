    #include <iostream>
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
   

    for(int i=0;i<100;i++)
    {
        if(cin.peek() == '\n') {
        // Leave the for loop
        break;
        }
        cin>>p[i];
    }

    cin.ignore(1);

    q=(char*)malloc(sizeof(char)*100);
    //cout<<"hello1";

    for(int i=0;i<100;i++)
    {
        if(cin.peek() == '\n') {
        // Leave the for loop
        break;
        }
        cin>>q[i];
    }

    //cout<<"hello2";
    char *z;

    // cout<<"hello3";
    z=function(p,q);

    for(int i=0;z[i]!='\0';i++)
        cout<<z[i];


    // for(int i=0;p[i]!='\0';i++)
    //     cout<<p[i];

    // for(int i=0;q[i]!='\0';i++)
    //     cout<<q[i];

    return 0;
    
}