#include<stdio.h>
#include<math.h>
int digit(int num)
{
    int count=0;
while(num!=0)
{
    num=num/10;
    count++;
}
printf("digit is %d\n",count);
return count;
}


void armstrong(int num)
{
int remainder, org_number=num,dgt;
float new_number=0;
dgt=digit(org_number);
printf("dgt is %d\n",dgt);
printf("%d\n",org_number);

while(org_number!=0)
{
remainder=org_number%10;
new_number=new_number+pow(remainder,dgt);
org_number=org_number/10;
printf("new number is %f\n",new_number);
printf("remaider is %f\n",pow(remainder,dgt));

}
if(new_number==num)
{
    printf("armstrong number");

}
else
{
printf("not a armstrong number");
}

return;
}


int main()
{
    int num;
    printf("enter a number= ");
    scanf("%d",&num);
    armstrong(num);

}