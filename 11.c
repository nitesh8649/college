#include<stdio.h>
int main()
{
int sec,min,hour;
printf("Enter second=");
scanf("%d",&sec);

min=sec/60;
if(min<60)
{
    printf("0:%d (hour:minute)",min);

}
else{
    hour=min/60;
    min=min%60;
    printf("%d:%d (hour:minute)",hour,min);


}
    return 0;
}