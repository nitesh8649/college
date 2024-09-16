#include<stdio.h>
int main()
{
    int English,Physics,Chemistry,Maths,Computer,Totall;

    printf("English=");
    scanf("%d",&English);

    printf("Physics=");
    scanf("%d",&Physics);

    printf("Chemistry=");
    scanf("%d",&Chemistry);

    printf("Maths=");
    scanf("%d",&Maths);

    printf("Computer=");
    scanf("%d",&Computer);

    Totall =English+Physics+Chemistry+Maths+Computer;

    printf("Total marks=%d\n",English+Physics+Chemistry+Maths+Computer);

    printf("Percentage is=%d",Totall*100/500);
    
    return 0;
}