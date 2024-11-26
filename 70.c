#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);

    int array[size],i,check;


    printf("enter the value in the array:");

    for(i=0;i<size;i++)
    {
    scanf("%d",&array[i]);

    }

    printf("enter the number to check whether the number is present or not:");
    scanf("%d",&check);


    for(i=0;i<size;i++)
    {
    if(array[i]==check)
    {
        printf("%d is present in the array\n",check);
        break;
    }

    if(i==size-1)
    {
    printf("%d is not present in the array\n",check);

    }
    }
    return 0;
}