#include<stdio.h>

int main()

{
    int num[10],i,odd=0,even=0;

for(i=0;i<10;i++)
{
    printf("Enter a number=");
    scanf("%d",&num[i]);
    
    if(num[i]%2==0)
    {
        even=even+1;
    }
    else{
        odd=odd+1;
    }
}
printf("total even number is %d\n",even);

printf("total odd number is %d",odd);
return 0;
}