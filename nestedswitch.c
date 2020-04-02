#include<stdio.h>
void main()
{
    int a=100;
    int b=200;
    switch(a)
    {
        case 100:
            printf(" I am in outer switch \n");
            switch(b)
            {
                case 200:
                    printf(" I am in inner switch \n");
            }
    }
}