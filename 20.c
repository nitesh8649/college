#include<stdio.h>
int main ()
{
    int num1,num2,result;
    char operations;

    printf("enter the number 1 =");
    scanf("%d",&num1);
    
    printf("enter the number 2 =");
    scanf("%d",&num2);

    printf("enter the operatin ");
    scanf("%c",&operations);

    switch (operations)
    {
    case '+':
    result=num1+num2;
    break;

    case '-':
    result=num1-num2;
    break;

    case '/':
    result=num1/num2;
    break;

    case '*':
    result=num1*num2;
    break;

    default:
    printf("invalid operation");
    }

}