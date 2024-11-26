#include<stdio.h>
int main()
{
    float amount;
    printf("Enter consuption unit =");
    scanf("%f",&amount);

if(amount<=200)
{
    printf("rate for charge=%f",0.5*amount);
}



else if(amount<=400)
{
    printf("rate of charges=%f",0.65*amount);
}



else if(amount<=600)
{
    printf("rate of charges=%f",0.8*amount);
}



else 
{
    printf("rate of charges=%f",1.25*amount);
}
    return 0;
}
