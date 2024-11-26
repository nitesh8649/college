#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int N,i,j,dumb;
    printf("This program will printout like\nA\nBB\nCCC\nDDDD.......\nEnter the number of times you want to print this type of pattern:");
    scanf("%d",&N);

    for(i=1;i<N;i++)
    {
        dumb=64+i;
        for(j=0;j<i;j++)
        {
            printf("%c",dumb);
        }
        printf("\n");
        
    }

}