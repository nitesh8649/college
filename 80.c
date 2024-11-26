#include<stdio.h>
void fibonacci(int);
int main()
{
int num;

    printf("enter a N to print first N fibonacci numbers");
    scanf("%d",&num);
    fibonacci(num);

}
void fibonacci(int num)
{
int i,fibo=0,num1=0,num2=1;
for (i=0;i<num;i++)
{
    printf("%d\n",fibo);
    num1=num2;
    num2=fibo;
    fibo=num1+num2;

}
}