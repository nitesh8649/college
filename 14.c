#include<stdio.h>
int main()
{
    char a;
    printf("enter=");
    scanf("%c",&a);

    if(a>64&&a<91)
    {
        printf("upper case");
    }
    else if (a>96&&a<123)
    {
        printf("lower case");
    }
    else if (a>47&&a<58)
    {
        printf("Digit");
    }
    else{
        printf("special symbol");
    }

    return 0;
}