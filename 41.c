#include<stdio.h>
int main()
{
    int num,i,a;
    printf("Enter a number=");
    scanf("%d",&num);

for(i=1;i<=num;++i)
{
    a=num%i;
    if(a==0)
    {
        printf("%d\n",i);
    }
}

    return 0;
}