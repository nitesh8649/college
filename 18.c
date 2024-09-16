#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("a=");
    scanf("%d",&a);

    
    printf("b=");
    scanf("%d",&b);

    
    printf("c=");
    scanf("%d",&c);

    num=a>b?(a>c)?a:c :b>c?b:c;
    printf("max num is %d",num);

    

    return 0;
    }