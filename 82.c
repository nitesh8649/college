#include<stdio.h>
int factNCR(int,int);
int fact(int);
int main ()
{
    int N,R;
    printf("enter N ");
    scanf("%d",&N);

    printf("enter R ");
    scanf("%d",&R);
    printf("%d",factNCR(N,R));
}
int factNCR(int N,int R)
{
    int n,r,x,y;
    n=fact(N);
    r=fact(R);
    y=N-R;
    y=fact(y);
    x=(n/(r*y));
    return x;
    

}
int fact(int num)
{
    int fact=1;
    for(int i=2;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}