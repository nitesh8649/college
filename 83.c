#include<stdio.h>
int arr(int);
int main()
{
    int size ;
    printf("enter the size of an array");
    scanf("%d",&size);
     arr(size);

}
int arr(int size)
{
    int arr[size],max;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        max=arr[0];
        if(arr[0]<arr[i])
        {
            max=arr[i];
        }
        else{}

    }
    printf("max value in array is %d",max);
    

}