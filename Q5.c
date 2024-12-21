include<stdio.h>



void printCubeTable(int limit) 
{
    printf("Number\tCube\n");
    printf("---------------\n");
    for (int i = 1; i <= limit; i++) 
    {
        printf("%d\t%d\n", i, i * i * i);
    }
}

int main() 
{
    int limit;

   
    printf("Enter the limit for the cube table: ");
    scanf("%d", &limit);


    printCubeTable(limit);

    return 0;
}