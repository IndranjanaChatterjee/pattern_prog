#include<stdio.h>
int main()
{
	int i,j,c=65,d=c;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",d);
			d=d+3;
		}
		c=c+2;
		d=c;
		printf("\n");
	}
	return 0;
}