#include<stdio.h>
void pallidrom(int num)
{
int remainder,new_number=0, org_number=num;
while(org_number!=0)
{
remainder=org_number%10;
new_number=new_number*10+remainder;
org_number=org_number/10;
}
if(new_number==num)
{
    printf("pallidrom number");

}
else
{
printf("not a pallidrom number");
}

return 0;
}
int main()
{
    int num;
    printf("enter a number= ");
    scanf("%d",&num);
    pallidrom(num);

}