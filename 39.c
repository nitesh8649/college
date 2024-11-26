#include<stdio.h>
int main()
{
int num,i=1,a=1;
printf("Enter a number =");
scanf("%d",&num);

while(i<=num)
{
     a=a*i;
    printf("%d/%d+",i,a);
    i++;
    
}


    return 0;
}