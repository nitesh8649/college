#include<stdio.h>
int main ()
{
    int i,j,x,a;
    printf("enter the number of times you want to print the pattern");
    scanf("%d",&a);

    for(i=1;i<=(a/2)+1;i++)
    {
        for(j=0;j<i;j++)
        {
        printf("*");
        }
        for(x=i-1;x>0;x--)
        {
            printf("*");
        }
        printf("\n");
    }


    for(i=a/2;i>0;i--)
   {
    for(j=0;j<i;j++)
       {
       printf("*");
       }
       for(x=i-1;x>0;x--)
       {
        printf("*");
       }
       printf("\n");
    }


}