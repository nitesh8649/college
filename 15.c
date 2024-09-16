#include<stdio.h>
int main()
{
    int English,Physics,Chemistry,Maths,Computer,Totall,percentage;

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

   percentage=Totall*100/500;

   if(percentage>=90 && percentage<100)
   {
printf("A grade");
   }
   else if (percentage>=80 && percentage<90)
   {
printf("B grade");
   }
   else if (percentage>=70 && percentage<80)
   {
printf("c grade");
   }
   else if (percentage>=60 && percentage<70)
   {
printf("D grade");
   }
   else if (percentage>=50 && percentage<60)
   {
printf("E grade");
   }
   else 
   {
printf("lowest grade");
   }
    
    return 0;
}