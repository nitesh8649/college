#include<stdio.h>
int main()
{
int num,i=1,a=0;
printf("Enter a number =");
scanf("%d",&num);

while(i<=num)
{
     a=i*i;
    printf("%d\n",a);
    i++;
    
}


    return 0;
}