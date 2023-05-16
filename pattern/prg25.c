#include<stdio.h>
int main()
{
	int i,j,c=68;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			printf("%c",(c+j));
			
		}
		c=c-1;
		
		printf("\n");
	}
}