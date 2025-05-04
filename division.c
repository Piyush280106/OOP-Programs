#include<stdio.h>
int main()
{
    int no;
    printf("\nEnter Number:");
    scanf("%d",&no);
    if(no%9==0)
        printf("Divisible by 9");
    else
        printf("not divisible by 9");
}
