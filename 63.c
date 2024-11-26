#include<stdio.h>
int main()
{
    int array[3][3],i,j,max,min;
    printf("enter the value of matrix as from left to right;");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&array[i][j]);
        }
    }

    max=array[0][0];
    min=array[0][0];
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
        if(array[i][j]>max)
        {
            max=array[i][j];
        }

        if(array[i][j]<min)
        {
            min=array[i][j];
        }
        }
        


    }


    printf("max element=%d\n",max);
    printf("min element=%d",min);

}
