#include<stdio.h>
int main()
{
    char operator;
    float num1,num2,result;

      printf("operator=");
    scanf("%c",&operator);
    

    printf("enter num1=");
    scanf("%f",&num1);

    printf("enter num2=");
    scanf("%f",&num2);


    switch (operator)
    {
    case '+':
    result=num1+num2;
    break;

    case '-':
    result=num1-num2;
    break;

    case '*':
    result=num1*num2;
    break;

    case '/':
    result=num1/num2;
    break;

    default:
    printf("invalid operator");
    }
     printf("%f",result);

     return 0;


}