#include<stdio.h>
void main()
{
    int i,n[10];
    for(i=0;i<10;i++)
    {
        n[i]=100+i;
        printf("Element[%d] = %d \n",i,n[i]);
    }
}