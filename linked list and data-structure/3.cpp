#include <iostream>
using namespace std;

struct node {
    int n;
    struct node* next;
};


struct node* new_node(int k) 
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->n =k;
    temp->next= NULL;
    return temp;
}

struct node* delete_nth_node_from_the_end(struct node* head,int k)
{
    struct node *temp1=head;
    struct node *temp2=head;
    for(int i=0;i<k;i++)
    {
        temp2=temp2->next;
    }
    while(temp2->next!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp1->next=temp1->next->next;
    return head;
}

void print(struct node* head) 
{
    while (head != NULL) {
        printf("%d ", head->n);
        head = head->next;
    }
    printf("\n");
}

int main() 
{
    

    struct node *head;
    int n;
    cout<<"enter the number of nodes to be created: ";
    cin>>n;


    
    
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

    cout<<"enter the value of n: ";
    int k;
    cin>>k;
    head->next=delete_nth_node_from_the_end(head->next,k);

    print(head->next);
    
    
   

  

    return 0;
}
