//---- 2.create a linked list and print it in the reverse order ------

// ---------------------- Library Function --------------------

#include<stdio.h>
#include<stdlib.h>

// ---------------------- Linked List Creation --------------------

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *end;

// ---------------------- Linked List Creation Function --------------------

void create(int n)
{
	int data,i;
	struct node *new;
	for(i=1;i<=n;i++)
	{
		new=(struct node *)malloc(sizeof(struct node));   // Create Node 

		printf("Enter the element at position %d: \n",i);
		scanf("%d",&data);

		new->data=data;
		new->next=NULL;
		if(start==NULL)
		{
			start=new;
			end=new;
		}
		else
		{
			end->next=new;
			end=new;
		}
	}
}

// ---------------------- Display Element Function --------------------

void display()
{
	struct node *curr=start;
	while(curr!=NULL)
	{
		printf("%d ",curr->data);
		curr=curr->next;
	}
}

// ---------------------- Reverse List Function --------------------

void reverse(int n)
{
	int a[n],i;
	struct node *temp=start;    // Traverse the list and print data

	for(i=0;i<n;i++)
	{
		a[i]=temp->data;
		temp=temp->next;
	}

	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}

// ---------------------- Main Function --------------------

int main()
{
	int n;
	printf("Enter the total number of elements you want to Enter: ");
	scanf("%d",&n);
    printf("\n");

	create(n);   // Create N nodes

	printf("\nThe elements in Original Linked List are as follows:");

	display();   // Display current list

	printf("\n\nThe elements in Reversed Linked List are as follows:");
	reverse(n);

    printf("\n");

    return 0;
}