#include <stdio.h>
#include <stdlib.h>
// #define MAXNODE 7
typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}node;
int cnt = 0;
int h = 0;
int MAXNODE=0;
void insert(node *ptr) {
    if(cnt==MAXNODE)
       return;

    int val;
    printf("Currently under %d and total nodes till now %d\n",ptr->data, cnt);
    printf("Left child?(-1 for no node)\n");
    scanf("%d",&val);
    if(val!=-1){
        node *tmp=(node *)malloc(sizeof(node));
        tmp->data=val;
        tmp->left=tmp->right=NULL;
        ptr->left=tmp;
        cnt++;
    }
    if(cnt==MAXNODE)
       return;

    printf("Right child?(-1 for no node)\n");
    scanf("%d",&val);
    if(val!=-1){
        node *tmp=(node *)malloc(sizeof(node));
        tmp->data=val;
        tmp->left=tmp->right=NULL;
        ptr->right=tmp;
        cnt++;
    }

    if(cnt==MAXNODE)
       return;

    if(ptr->left!=NULL)
       insert(ptr->left);
    if(ptr->right!=NULL)
       insert(ptr->right);
}
void insNewNode(node *ptr,int nd){
    if(ptr->left==NULL){
        node *tmp=(node *)malloc(sizeof(node));
        tmp->data=nd;
        tmp->left=tmp->right=NULL;
        ptr->left=tmp;
        return;
    }else if(ptr->right==NULL){
        node *tmp=(node *)malloc(sizeof(node));
        tmp->data=nd;
        tmp->left=tmp->right=NULL;
        ptr->right=tmp;
        return;
    }
    insNewNode(ptr->left,nd);
    insNewNode(ptr->right,nd);
}
void display_postorder(node * binary_tree) {
    if (binary_tree!=NULL) {
         display_postorder(binary_tree->left);
         display_postorder(binary_tree->right); 
         printf("%d\n",binary_tree->data);
   }
}

void mht(node *ptr, int ht){
    if(ptr->left==NULL && ptr->right==NULL){
        h = (ht > h ? ht : h);
        return;
    }

    if(ptr->left!=NULL)
       mht(ptr->left, ht+1);
    if(ptr->right!=NULL)
       mht(ptr->right, ht+1);
}
void cleartree(node *ptr){
    
     if(ptr == NULL)
        return;

       cleartree(ptr->left);
    
       cleartree(ptr->right);

       free(ptr);

}

int main()
{
    printf("Enter no. of nodes:\n");
    int n;
    scanf("%d",&n);
    MAXNODE=n;
    node *root=(node *)malloc(sizeof(node));
    printf("Enter data in root node:(-1 for no nodes)\n");
    scanf("%d",&root->data);
    if(root->data==-1){
        free(root);
        return 0;
    }
    cnt = 1;
    root->left=root->right=NULL;
    insert(root);
    int nd;printf("Enter new node:\n");
    scanf("%d",&nd);
    insNewNode(root,nd);
    display_postorder(root);
    mht(root,1);
    printf("height = %d\n", h);
    cleartree(root);
    return 0;
}