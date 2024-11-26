#include<stdio.h>
int main()
{
    int f;
    printf("Enter temp.(fahrenheit)");
    scanf("%d",&f);

    printf("Temp.(celsius)=%d",(f-32)*9/5);
    return 0;

}