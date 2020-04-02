#include<stdio.h>
int num=75;
void display();
void main()
{
    extern int num;
    printf("NUM=%d",num);
    display();
}
void display()
{
    extern int num;
    printf("NUM=%d",num);
}