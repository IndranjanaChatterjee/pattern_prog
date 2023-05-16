#include<stdio.h>
int main()
{
	int i,j,c=96,d=68,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(c+j));
			
		}
		for(k=5;k>=i;k--)
		{
			printf("%c",(d+k-4));
			
		}
		d--;
		printf("\n");
	}
	return 0;
}