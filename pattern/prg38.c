#include<stdio.h>
int main()
{
	int i,j,c=65,d=88,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",c);
			
		}
		for(k=5;k>i;k--)
		{
			printf("%c",d);
			
		}
		
		printf("\n");
	}
	return 0;
}