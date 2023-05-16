#include<stdio.h>
int main()
{
	int i,j,c=70,d=c;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(c-j));
		}
		c++;
		printf("\n");
	}
}