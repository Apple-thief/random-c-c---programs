#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("enter no.:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("sum = %d",sum);
}