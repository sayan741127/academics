//----  1.create a linked list
// and delete the node of the given value from the list -----

// ---------------------- Library Function --------------------

#include <stdio.h>
#include <stdlib.h>

// ---------------------- Linked List Creation --------------------

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} node;  

node *start, *end;  // Declare start for first node and end for last node

// ---------------------- Push Operation --------------------

void push(int i)
{
    node *ptr = (node *)malloc(1 * sizeof(node)); // Create Node 

    printf("Enter the element at position %d: \n", i);
    scanf("%d", &(ptr->data));

    ptr->next = NULL; 
    if (start == NULL)
    {
        start = ptr;
        end = ptr;
    }
    else
    {
        end->next = ptr;
        end = ptr;
    }
}

// ---------------------- Display Element Function --------------------

void display()
{
    node *ptr = start;  // Traverse the list and print data

    printf("The elements in the Linked List are as follows: \n");

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// ---------------------- Delete Node Function --------------------

void delete (int key)
{
    node *temp = start, *prev;  // Need two pointer to delete node and link another

    if (temp != NULL && temp->data == key)
    {
        start = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

// ---------------------- Main Function --------------------

int main()
{
    int n;

    printf("Enter the total number of elements you want to Enter: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        push(i);
    }

    printf("\n");
    display();   // Display current list
    printf("\n");

    printf("Enter the specific element you want to Delete: ");
    int x;
    scanf("%d", &x);
    delete (x);  // Delete the pecific element

    printf("\n");
    display();   // Display list after deletion
    printf("\n");

    return 0;
}
