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


struct node* reverse(struct node* head) 
{
    struct node *prev, *current, *next;
    prev = NULL;
    current = head;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
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
    
    printf("Original linked list: ");
    print(head->next);

    head = reverse(head);

    printf("Reversed linked list: ");
    print(head);

    return 0;
}
