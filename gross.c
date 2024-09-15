#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter basic salary=");
    scanf("%d",&a);

     printf("enter HRA(House rent allowance)=");
    scanf("%d",&b);

    printf("Gross salary is %d",a+b);
    
    return 0;
}