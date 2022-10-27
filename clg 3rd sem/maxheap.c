// 1. Write a c program for inserting a new node in max heap.

#include <stdio.h>
#include<stdlib.h>

void heapify(int arr[], int n, int i)
{
    int parent = (i - 1) / 2;

    if (arr[parent] > 0)
    {
        if (arr[i] > arr[parent])
        {
            int temp = arr[i];
            arr[i]= arr[parent];
            arr[parent] = temp;
            heapify(arr, n, parent);
        }
    }
}

void insertNode(int arr[], int n, int key)
{
    n = n + 1;
    arr[n - 1] = key;
    heapify(arr, n, n - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int n;
    printf("Enter the NUMBER of elements of array\n");
    scanf("%d", &n);
    int arr[10000];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    int key ;
    printf("Enter the element you want to insert: ");
    scanf("%d", &key);
    insertNode(arr, n, key);
    printArray(arr, n);

    return 0;
}
