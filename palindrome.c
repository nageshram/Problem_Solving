#include<stdio.h>
#include<stdlib.h>

int main()
{
    int  originalnum,num,rem,rev=0;
    scanf("%d",&num);
    originalnum=num;
    while(num>0)
    {
        rem=num%10;
        rev+=rev*10+rem;
        num=num/10;
    }
    if(rev == originalnum)
        printf("True");
        else printf("False");

    return 0;
}