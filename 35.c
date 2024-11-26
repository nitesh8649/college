#include<stdio.h>
int main()
{
int num,remainder,sum=0;
printf("Enter a number=");
scanf("%d",&num);

while(num!=0)
{
    remainder=num%10;
    sum=sum+remainder;
    num=num/10;
}
if(sum<10)
{
    printf("sum of digit is=%d",sum);
}
else {
    printf("sum of digit is not a single digit");
}


    return 0;
}