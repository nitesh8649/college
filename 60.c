#include<stdio.h>
int main()
{
    int size=5,min,mainindex,temp;
    int arr[5],arr2[5];
    printf("enter the elements of an array \n");
    for(int k=0;k<5;k++)
    {
        scanf("%d",&arr[k]);
    }



    for(int i=0;i<5;i++)
{
    mainindex=i;
    for(int j=i+1;j<5;j++)
    {
    if(arr[j]<arr[mainindex])
    {
        mainindex=j;
    }
    }

    if(mainindex!=i)
    {
        temp=arr[i];
        arr[i]=arr[mainindex];
        arr[mainindex]=temp;
    }

}

    printf("\n");
    for(int k=0;k<5;k++)
    {
        printf("%d\n",arr[k]);
    }


    return 0;
}