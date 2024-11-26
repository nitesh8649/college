#include<stdio.h>
int main()
{
    int array[3][3],array2[3][3],i,j;
    printf("enter the value of matrix as from left to right:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&array[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d   ",array[i][j]);
        array2[j][i]=array[i][j];
        }
        printf("\n");
    }

    printf("Transpose of matrix:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            printf("%d  ",array2[i][j]);
        }
        printf("\n");
    }




}