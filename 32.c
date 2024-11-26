#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter numbers=");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2&&num1>num3)
    {
        printf("%d is max number",num1);
        if(num2>num3){
             printf("%d is second max number",num2);
        }
        else{
             printf("%d is second max number",num3);
        }
        
    }





   else if(num2>num1&&num2>num3)
    {
        printf("%d is max number",num2);
        if(num1>num3){
             printf("%d is second max number",num1);
        }
        else{
             printf("%d is second max number",num3);
        }
    }





if(num3>num2&&num3>num1)
    {
        printf("%d is max number",num3);
        if(num2>num1){
             printf("%d is second max number",num2);
        }
        else{
             printf("%d is second max number",num1);
        }
    }

    return 0;
}