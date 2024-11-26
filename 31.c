#include<stdio.h>
int main ()
{
    int num,a,sum=0;
    printf("enter a number = ");
    scanf("%d",&num);

    while(num!=0){
        a=num%10;
        sum=sum+a;
        num=num/10;

    }
  printf("Sum of digit of given number=%d",sum);

    return 0;
}