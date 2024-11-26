#include<stdio.h>
int main ()
{
    int num,a,reverse=0;
    printf("enter a number = ");
    scanf("%d",&num);
    
    while(num!=0){
        a=num%10;
        reverse=reverse*10+a;
        num=num/10;

    }
    printf("reverse of a given number=%d",reverse);
    

    return 0;
}