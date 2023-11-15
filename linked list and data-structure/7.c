#include <stdio.h>
#include <stdlib.h>

struct node {
    int n;
    struct node* left;
    struct node* right;
};

struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->n = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void root_to_node_path(struct node* root,int k)
{
    if(root->n==k)
    {
        printf("found");
    }
    if(k>root->n)
    {
        printf("%d -> ",root->n);
        root_to_node_path(root->right,k);
    }
    if(k<root->n)
    {
        printf("%d -> ",root->n);
        root_to_node_path(root->left,k);
    }

}


int main()
{
    struct node *root = createNode(5);
    root->left = createNode(2);
    root->right = createNode(8);
    root->left->left = createNode(1);
    root->left->left->left = createNode(0);
    root->left->right = createNode(3);
    root->right->left = createNode(7);
    root->right->right = createNode(9);
    
    int m;
    printf("enter the number to be found: ");
    scanf("%d",&m);
    root_to_node_path(root,m);
    printf("\n");


    return 0;
}