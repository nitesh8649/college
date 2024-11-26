#include<stdio.h>
int main()
{
    int M,P,C,E;
    printf("Marks in mathematics out of 200=");
    scanf("%d",&M);

        printf("Marks in Physics out of 200=");
    scanf("%d",&P);

        printf("Marks in chemistry out of 200=");
    scanf("%d",&C);


        printf("Marks in entrance examination out of 100=");
    scanf("%d",&E);

    printf("Cut off marks is %d",M/2+P/2+C/2+E);



    return 0;
}