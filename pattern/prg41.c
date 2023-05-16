#include<stdio.h>
int main()
{
	int i,j,c=64,d=88,k;
	for(i=1;i<=6;i++)
	{
		for(j=6;j>i;j--)
		{
			printf(" ");
			
		}
		for(k=1;k<=i;k++)
		{
			printf("%c",(c+k));
			
		}
		
		printf("\n");
	}
	return 0;
}