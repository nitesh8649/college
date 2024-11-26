#include<stdio.h>
int main()
{
    int array[3][3],i,j,row1=0,row2=0,row3=0;
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
        }
        printf("\n");
    }


    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        row1=row1+array[0][j];
        row2=row2+array[1][j];
        row3=row3+array[2][j];
        }
    }
    printf("sum of row1=%d\n",row1/3);
    printf("sum of row2=%d\n",row2/3);
    printf("sum of row3=%d\n",row3/3);



}
