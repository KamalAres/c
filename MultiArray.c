#include<stdio.h>
void main()
{
    int n[3][3]={0,1,2,3,4,5,6,7,8};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element[%d][%d] = %d\n",i,j,n[i][j]);
        }
    }
}