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

    struct node hello;
    head=&hello;
    struct node *temp1=head;
    for(int i=0;i<n;i++)
    {
        struct node *temp2=new node;
        cout<<"enter the value of node "<<i+1<<": ";
        cin>>temp2->n;
        temp2->next=NULL;
        temp1->next=temp2;
        temp1=temp2;
    }
    temp1=head;
    struct node *temp2=new node;
    temp2=head;

    while(temp2!=NULL &&temp2->next!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next->next;

        if(temp1==temp2)
        {
            cout<<"loop detected\n";
            return 0;
        }
        else
            cout<<"no loop detected\n";
    }
}