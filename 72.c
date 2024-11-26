#include<stdio.h>
int main()
{
    int size,i,N,j,x,k;
    printf("enter size of an array: ");
    scanf("%d",&size);

    printf("enter elements of array\n");

    int array[size],array2[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("enter a number N by which an array will be rotate by N position\n");
    scanf("%d",&N);

    for(i=0,j=N;i<size;i++,j++)
    {
        if(j<size)
        {
        array2[j]=array[i];
        }
        else
        {
            x=j-size;
        array2[x]=array[i];
        }

    }

    printf("after a rotation :\n");
    
    for(k=0;k<size;k++)
    {
        printf("%d\n",array2[k]);
    }

    return 0;
}