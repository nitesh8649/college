#include<stdio.h>

int main()

{
    int n;
    printf("enter the size of the arrays=\n");
    scanf("%d",&n);

    int num1[n],num2[n],num3[n],i;

for(i=0;i<n;i++)
{
    printf("Enter a number in array 1=");
    scanf("%d",&num1[i]);
    
}


for(i=0;i<n;i++)
{
    printf("Enter a number in array 2=");
    scanf("%d",&num2[i]);
    
}


for(i=0;i<n;i++)
{
    num3[i]=num1[i]+num2[i];
    printf("%d\n",num3[i]);
    
}


return 0;
}