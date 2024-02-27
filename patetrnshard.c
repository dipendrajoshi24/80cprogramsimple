#include<stdio.h>
void main()
{
	int i,j;
	int n=10;
	for( i=10; i<= n; i-=1)
	for(j=10; j<=i; j-=1)
	{
	printf("%d",j);
	}
	printf("\n");
} 
