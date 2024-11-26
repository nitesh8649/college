#include<stdio.h>
int main()
{
    float amount;
    printf("Enter sales amount=");
    scanf("%f",&amount);

if(amount<=500)
{
    printf("commision=%f",0.05*amount);
}



else if(amount<=2000)
{
    printf("commision=%f",0.1*amount);
}



else if(amount<=5000)
{
    printf("commision=%f",0.12*amount);
}



else 
{
    printf("commision=%f",0.125*amount);
}
    return 0;
}
