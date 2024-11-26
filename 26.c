#include <stdio.h>

int main() {
  int num,odd=0,even=0,i;
  printf("enter a number =");
  scanf("%d",&num);
for(i=1;i<=num;i++){
if(i%2==0)
{
    even=even+i;
}
else
{
    odd=odd+i;
}
}
printf("sum of even number between 1 to given number =%d",even);
printf("\nsum of odd number between 1 to given number =%d",odd);
    return 0;
}
