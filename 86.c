#include<stdio.h>
#include<conio.h>
int length(char str[200]);
int main()
{
char str[200];
gets(str);

printf("length id %d",length(str));

}

int length(char str[200])
{
    int i=0,lgt;
    while(str[i]!='\0')
    {
        i++;
        lgt=i;
    }
    return lgt;
}