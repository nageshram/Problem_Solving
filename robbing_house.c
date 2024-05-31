#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{// rob the houses, all houses are adjacent to each other ,if two adjacent houses robbed at same night then the security system will call the police automatically , write a code to rob the houses without intervention of security system
	int array[]={2,4,1,8,1,9};
	//robbing only odd number houses
	int n=sizeof(array)/sizeof(array[0]);
	int robbed_amt=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			robbed_amt=robbed_amt+array[i-1];
		}
	}
	printf("%d ",robbed_amt);
}