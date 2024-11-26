#include<stdio.h>
int main()
{
    int hour,second,min;
    
    printf("hour=");
    scanf("%d",&hour);

     printf("min=");
    scanf("%d",&min);

     printf("second=");
    scanf("%d",&second);

    second=hour*60*60+min*60+second;
    printf("Total second=%d",second);

    return 0;
}