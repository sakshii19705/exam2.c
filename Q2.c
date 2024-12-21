#include<stdio.h>

int main()
{
    int rows,cols;
    printf("enter the number of row");
    scanf("%d",&rows);
    printf("enter the number of cols");
    scanf("%d",&cols);
    int matrix [size]
    printf("enter the elements of matrix");
    for (int i=0;i<rows;i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", & matrix[i]);
    }

    int max =matrix[0];
     for (int i = 1; i < size; i++) 
    {
        if (matrix[i] > max) 
        {
            max = matrix[i];
        }
    }

    
    printf("The maximum number in the matrix is: %d\n", max);

    return 0;
} 
