#include<stdio.h>
void main()
{
    int balance[5]={1,2,3,4,5};
    int *p;
    int i;
    p=balance;
    printf("Array value using pointer\n");
    for(i=0;i<5;i++)
    {
        printf("Pointer %d=%d\n",i,*(p+i));
    }
    printf("Array using balance as address\n");
    for(i=0;i<5;i++)
    {
        printf("balance %d = %d \n",i,*(balance+i));
    }

}