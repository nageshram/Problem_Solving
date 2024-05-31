#include<stdio.h>

//dealing with index, be carefull
int maxProfit(int  *prices, int n)
{
	int min=0,i,pos,buy=0,sell=0;
	for(i=0;i<n;i++)
	{
		if(min==0) min=prices[i];
		if (prices[i] <= min){
	min=prices[i];
	pos=i; }
	}
	printf("buy : %d",pos);
	buy=min;
	for(i=0;i<n;i++)
	{
	if (i> pos && min != prices[i] && buy<prices[i] && prices[i])
	{ 
	      if(sell==0)
			sell=i;
			if(prices[sell]>prices[i])
			continue;
			else sell=i;
printf(" \nsell = %d ",i);
	}
		
	} 
	if(sell==0 || n<=2)
	return sell;
	else return sell+1;
	
}

int main(int argc, char *argv[])
{
	int arr[]={2,6,7,1,9,7};
	int n=sizeof(arr)/sizeof(arr[0]);
 printf("\n output = %d ",maxProfit(arr,n));
}