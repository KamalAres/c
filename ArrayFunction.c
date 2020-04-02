#include<stdio.h>
double average(int arr[],int size);
void main()
{
    int balance[5]={1,2,3,4,5};
    int avg;
    avg=average(balance,5);
    printf("Average = %d\n",avg);
}
double average(int arr[],int size)
{
    int i,sum=0;
    double avg;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    avg=sum/5;
    return avg;
}