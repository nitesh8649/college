#include<stdio.h>
int main()
{
    int array1[3][3],array2[3][3],array3[3][3],i,j;
    printf("enter the value of matrix as from left to right:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&array1[i][j]);
        }
    }
    printf("\n");


    
    printf("enter the value of second matrix:");


    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&array2[i][j]);
        }
    }
        printf("\n");



    

    printf("addation of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        array3[i][j]=array1[i][j]+array2[i][j];
        printf("%d  ",array3[i][j]);
        }
        printf("\n");
    }


}