#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
} node;

node *head = 0, *newnode = 0, *temp = 0;

void ins(int value)
{
    newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->link = 0;
    if (head == 0)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->link = newnode;
        temp = newnode;
    }
    return;
}

node* del(node *head)
{
    node *temp;
    temp = head;
    int x=head->data;
    head = head->link;
    free(temp);

    // return head;

    temp = head;
    printf("new node\n");
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->link;
    }
    printf("\nDeleted: ");
}

void display(node *head)
{
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n\n");
    return;
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            ins(value);
            break;
        case 2: 
           del(head);
            //printf("Deleted element is %d:\n", del(head));
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}