#include<stdio.h>
int main()
{
	int i,j,c=65,d=c;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",d);
			d=d+2;
			
		}
		c=c+3;
		d=c;
		printf("\n");
	}
}