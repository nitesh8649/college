#include<stdio.h>
int main ()
{
    int size,i,j,a;
    printf("enter the size of an arrayA: ");
    scanf("%d",&size);

    int arrayA[size];
    printf("enter elements in arrayA\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",arrayA[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arrayA[i]>arrayA[j])
            {
                a=arrayA[i];
                arrayA[i]=arrayA[j];
                arrayA[j]=a;
            }
        }
    }



    int size2,j;
    printf("enter the size of an arrayB: ");
    scanf("%d",&size2);

    int arrayB[size2];
    printf("enter elements in arrayB\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",arrayB[i]);
    }

}