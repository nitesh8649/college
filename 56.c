#include<stdio.h>

int main()

{
    int num[10],i,zero=0,positive=0,negative=0;

for(i=0;i<10;i++)
{
    printf("Enter a number=");
    scanf("%d",&num[i]);
    
    if(num[i]%2==0)
    {
        zero=zero+1;
    }
    else if(num[i]>0){
        positive=positive+1;
    }
    else {
        negative=negative+1;
    }
}
printf("total positive number is %d\n",positive);

printf("total negative number is %d",negative);

printf("total zero element is %d",zero);
return 0;
}