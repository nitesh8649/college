#include<stdio.h>
int main ()
{
    int num,pow,result=1,i;

      printf("num=");
    scanf("%d",&num);

     printf("pow=");
    scanf("%d",&pow);

    for(i=1;i<=pow;i++)
    {
        result=result*num;
    }
    printf("%d",result);
}