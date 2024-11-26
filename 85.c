#include<stdio.h>
void check(char);
int main()
{
 char character;
 printf("enter the character\n");
 scanf("%c",&character);
 check(character);
}

void check(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("character is vowel");
    }
    else
    {
        printf("enter character is not a vowel");
    }
}
