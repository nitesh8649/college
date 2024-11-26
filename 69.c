#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);

    int array[size],i,search;


    printf("enter the value in the array:");

    for(i=0;i<size;i++)
    {
    scanf("%d",&array[i]);

    }

    printf("enter the number to search:");
    scanf("%d",&search);


    for(i=0;i<size;i++)
    {
    if(array[i]==search)
    {
        printf("%d is present at location %d\n",search,i+1);
        break;
    }

    if(i==size-1)
    {
    printf("%d is not present in the array\n",search);

    }
    }
    return 0;
}