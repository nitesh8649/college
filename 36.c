#include<stdio.h>
int main()
{
int num,i;
printf("Enter a number =");
scanf("%d",&num);

for (i=1;i<=num;i=i+2)
{
    printf("%d\n",i);
}

    return 0;
}