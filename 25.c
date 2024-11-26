#include <stdio.h>

int main()
 {
    int i,a,table;
    printf("enter a number=");
    scanf("%d",&a);

for(i=1;i<=10;i++)
{
    table=i*a;
    printf("%d*%d=%d\n",a,i,table);
}
 

    return 0;
}
