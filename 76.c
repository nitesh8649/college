#include<stdio.h>
void evodd(int num)
{
if(num%2==0)
{
    printf("number is even");
}
else 
{
    printf("number is odd");
}
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    evodd(num);

}