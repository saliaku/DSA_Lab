#include <iostream>
using namespace std;

struct node
{
    int n;
    struct node *next;    
};


int main()
{
    struct node *head;
    int n;
    cout<<"enter the number of nodes to be created: ";
    cin>>n;
    if(n==0)
        {
            cout<<"no nodes created\n";
            return 0;
        }

    struct node hello;
    head=&hello;

    for(int i=0;i<n;i++)
    {
        struct node *temp=new node;
        cout<<"enter the value of node "<<i+1<<": ";
        cin>>temp->n;
        temp->next=NULL;
        head->next=temp;
        head=temp;
    }

    head=&hello;
    cout<<"the values of the middle node is: ";
    for(int i=0;i<n;i++)
    {
        head=head->next;
        if(n%2==0)
            {
                if(i==n/2)
                    cout<<head->n<<" ";
            }
        else if(n%2!=0)
            {
                if(i==(n/2))
                    cout<<head->n<<" ";
            }
    }
}