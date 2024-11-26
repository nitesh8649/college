#include<stdio.h>
int main ()
{
    int arr1[5];
    int arr2[5];
    int *ptr;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    ptr=arr1;

    for(int i=0;i<5;i++)
    {
        arr2[i]=ptr[i];
        printf("%d\n",arr2[i]);
    }
    

}