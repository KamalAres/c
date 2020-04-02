#include<stdio.h>
int sum(int x,int y);
void main()
{
    int a,b,c;
    printf("Enter two values :\n");
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("sum=%d\n",c);
}
int sum(int x,int y)
{
    return x+y;
}