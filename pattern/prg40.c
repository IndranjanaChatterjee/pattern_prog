#include<stdio.h>
int main()
{
	int i,j,c=64;
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(c+j));
			
		}
		c++;
		
		printf("\n");
	}
	return 0;
}