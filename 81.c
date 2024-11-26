#include<stdio.h>
int primef(int num);

int main(){
int num;
printf("enter a number ");
scanf("%d",&num);
if(primef(num))
{   
    printf("the number is prime ");
}
else {
    printf("the number is not a prime number ");
}
return 0;
}

int primef(int num)
{
    if (num==1)
    {
        return 1;
    }
    else 
    {
        for(int i=2;i<num;i++)
        {
            if (num%i==0)
            {
                return 0;
            }
            else {
                return 1;
            }
        }
    }
}
