#include<stdio.h>
int main()
{
	int i,j,k=68;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(k+j));
		}
		--k;
		printf("\n");
	
	
	}
}
