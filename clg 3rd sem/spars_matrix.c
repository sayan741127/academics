// Write a C program to implement, Right Lower Triangular Sparse Matrix.

#include<stdio.h>

int main() {
    int n;
    printf("Enter The Dimention of Sparse Matrix: ");
    scanf("%d",&n);
    int N=(n*(n+1)/2);
    int arr[N];
    printf("Enter The Sparse Matrix:\n");

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<=(n-i-1))
            {
                printf("0 ");
            }
            else
            {
                printf("%d ",arr[(i*(i+1)/2)+(j+i-n)]);
            }
            
        }
        printf("\n");
        
    }
    
    
    return 0;
}