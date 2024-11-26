#include<stdio.h>

int main()

{
    int n;
    printf("enter the size of the array=\n");
    scanf("%d",&n);

    int num[n],i,lrg,j,lrg2;

for(i=0;i<10;i++)
{
    printf("Enter a number=");
    scanf("%d",&num[i]);
    
    
}

for(i=0;i<10;i++)
{
    lrg=0;
    if(lrg<num[i])
    {
        lrg=num[i];
        j=i;
    }

    
}
for(i=0;i<10;i++)
{
    lrg2=0;
    if(i==j)
    {

    }
    else if(lrg2<num[i]) 
    {
        lrg2=num[i];
    }
}


return 0;
}