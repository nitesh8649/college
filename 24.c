#include<stdio.h>
int main()
{
    int x,n,y;
    printf("enter the value of x=");
    scanf("%d",&x);

    printf("enter the value of n=");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        y=1+x;
        break;

        case 2:
        y=1+(x/2);
        break;

        case 3:
        y=1+(x*x*x);
        break;

        default :
        y=1+n*x;
       
   
    }
  printf("y=%d",y);
   

    return 0;
}