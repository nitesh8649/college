#include<stdio.h>
int main ()
{
    int num,a,sum=0,y;
    printf("enter a number = ");
    scanf("%d",&num);
y=num;
    while(num!=0){
        a=num%10;
        sum=sum+a*a*a;
        num=num/10;

    }
    if (sum==y)
    {
        printf("Armstrong Number");

    }
    else{
        printf("Not a Armstrong Number");
    }

    return 0;
}