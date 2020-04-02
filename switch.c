#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    switch (a)
    {
    case /* constant-expression */1:
        printf("one");
        /* code */
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    
    default:
        printf("Enter the number between 1-5");
        break;
    }
}