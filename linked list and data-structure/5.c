#include <stdio.h>
#include <stdlib.h>

// Definition for binary tree node


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

// (left, root, right)
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->n);
        inorder(root->right);
    }
}

// (root, left, right)
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->n);
        preorder(root->left);
        preorder(root->right);
    }
}

// (left, right, root)
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->n);
    }
}


int main()
{
    struct node* root = createNode(1);
    root->left = createNode(2);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right = createNode(3);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->left->left = createNode(8);

    printf("Inorder traversal \n");
    inorder(root);

    printf("\nPreorder traversal \n");
    preorder(root);

    printf("\nPostorder traversal \n");
    postorder(root);
    return 0;
}