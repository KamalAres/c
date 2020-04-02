#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value for a:\n");
    scanf("%d",&a);
    if(a>=0)
    {
        if(a>0)
        {
            printf("a is positive\n");
        }
        else
        {
            printf("a is zero\n");
        }

    }
    else
    {
        printf("a is negative\n");
    }
}