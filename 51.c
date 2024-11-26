#include<stdio.h>
int main ()
{
    int i,a=10000,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("0");
        }
        printf("%d",a);
        a/=10;
        printf("\n");

    }
}
