#include<stdio.h>
int main()
{
    char a;
    printf("enter a alphabet=");
    scanf("%c",&a);

    if(a>64&&a<91)
    {
        printf("upper case");
    }
    else if (a>96&&a<123)
    {
        printf("lower case");
    }
    else{
        printf("not a alphabet");
    }

    return 0;
}