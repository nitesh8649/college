#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array=");
    scanf("%d",&size);

    int array[size],i,j,array2[size];
    printf("enter numbers in array:\n");
    for(i=0;i<size;i++)
{
       

    scanf("%d",&array[i]);

}

for(i=0;i<size;i++)
{
       

    printf("\narray[%d]=%d",i,array[i]);

}

for(i=0,j=size-1;i<size;i++,j--)
{
       array2[j]=array[i];
       

}

for(j=0;j<size;j++)
{
       printf("\narray2[%d]=%d",j,array2[j]);

    
}



    return 0;
}