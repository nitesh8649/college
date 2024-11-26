#include<stdio.h>

int main()

{
    int num[10],i,sum=0;

for(i=0;i<10;i++)
{
    printf("Enter a number=");
    scanf("%d",&num[i]);
    sum=sum+num[i];
}

printf("sum is %d",sum);

return 0;
}