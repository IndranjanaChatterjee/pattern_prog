#include<stdio.h>
int main()
{
	int i,j,k=70;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(k-j));
		}
		--k;
		printf("\n");
	
	
	}
}
