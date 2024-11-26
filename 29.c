#include<stdio.h>
int main ()
{
    int num,a,reverse=0,org;
    printf("enter a number = ");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        a=num%10;
        reverse=reverse*10+a;
        num=num/10;

    }
    if (reverse==org)
    {
        printf("Palidrome Number");

    }
    else{
        printf("Not a Palidrome Number");
    }

    return 0;
}