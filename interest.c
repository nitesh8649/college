#include<stdio.h>
int main()
{
    float P,R,T;
    printf("enter P[principle amount]=");
    scanf("%f",&P);

    printf("enter R[rate in %]=");
    scanf("%f",&R);

    printf("enter T[Time as number of years]=");
    scanf("%f",&T);

    printf("Simple Interest is=%f",P*R*T/100);
    return 0;

}