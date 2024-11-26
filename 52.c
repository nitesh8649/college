#include<stdio.h>
int main ()
{
    int i,j,a,y;
    printf("enter the number of times you want to print: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",j);
        
        }


        for(y=i-1;y>0;y--)
        {
            printf("%d",y);
        }
        printf("\n");
    }
}