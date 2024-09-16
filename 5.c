#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);

    
    printf("b=");
    scanf("%d",&b);

    
    printf("Before swap:\na=%d b=%d",a,b);
    c=a+b;
    a=c-a;
    b=c-b;
     printf("\nafter swap:\na=%d b=%d",a,b);

    return 0;
    
}