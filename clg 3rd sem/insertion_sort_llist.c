
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *start;

void sortedInsert(node *new_node)
{
    node *current;
    /* Special case for the head end */
    if (start == NULL || (start)->data >= new_node->data)
    {
        new_node->next = start;
        start = new_node;
    }
    else
    {
        /* Locate the node before
the point of insertion */
        current = start;
        while (current->next != NULL && current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

node *newNode(int new_data)
{
    /* allocate node */
    node *new_node = (node *)malloc(sizeof(node));

    /* put in the data */
    new_node->data = new_data;
    new_node->next = NULL;

    return new_node;
}

/* Function to print linked list */
void display(){
    node *ptr=start;
    if(ptr==NULL){
        printf("List is empty!!\n");
        return;
    }
    printf("Currently list is:\n"); 
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

/* Driver program to test count function*/
int main()
{
    /* Start with the empty list */
    start = NULL;
    int ch;
    while (1)
    {
        printf("------------------------------------------------------------------\n");
        printf("1.Insert element into linked list\n2.Display the list\n3.Exit\n");
        printf("------------------------------------------------------------------\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        if(ch==1){
            printf("Enter element:\n");
            int x;
            scanf("%d", &x);
            node *new_node = newNode(x);
            sortedInsert(new_node);
        }else if(ch==2){
            display();
            printf("\n");
        }else if(ch==3){
            exit(0);
        }else{
            printf("Wrong choice!!\n");
        }
    }

    return 0;
}