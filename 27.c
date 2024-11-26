#include<stdio.h>
int main ()
{
    int num;
    printf("enter a number= ");
    scanf("%d",&num);
    
    if(num==2||num==3||num==1||num==0)
    {
        printf("Prime number");
    }

    else if (num%2==0||num%3==0)
    {
         printf("Not a Prime number");
    }
    else {
         printf("Prime number");
    }


    return 0;

}