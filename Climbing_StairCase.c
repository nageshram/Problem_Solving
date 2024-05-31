#include<stdio.h>
int fib(int n)
{
	
	if (n<=1)
	{
		return n;
	}
	return fib(n-1)+fib(n-2);
}
int main(int argc, char *argv[])
{
	int n;
	printf("Enter the number of steps :");
	scanf("%d",&n);
	printf("%d",fib(n+1));//fibonacci starts from 0
}