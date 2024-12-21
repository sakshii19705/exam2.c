#include<stdio.h>

int main()
{
    float num;
    printf("enter a number");
    scanf("%f",&num);
    
     const char* result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
    printf("the number is %s\n",result);
    return 0;
}
