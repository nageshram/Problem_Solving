#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
	int f[n];
	f[0]=0;//these are repetitive hence by using dynamic  programming we are reduced the time and space 
	f[1]=1;
	for(int i=2;i<=n;i++)
	{
		f[i] = f[i-1]+f[ i-2];
	}
	return f[n];
}


int main()
{
	int n=9,f=fib(n);

		printf("%d",f);
	return 0;
}