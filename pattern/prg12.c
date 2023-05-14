#include<stdio.h>
int main()
{
	int i,j,k=64;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(k+j));
		}
		k=k+2;
		printf("\n");
	
	
	}
}
