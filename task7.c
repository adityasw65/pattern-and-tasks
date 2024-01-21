#include<stdio.h>
void main()
{
	int i,j,k=0;
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(i>=4)
			{
				if(j<=i-k)
				{
					printf("* ");
					k++;
				}
			}
			else
			{
				if(j<=i)
				{
					printf("* ");
				}
			}
		}
		printf("\n");
	}
}

/*

*
* *
* * *
* * * *
* * *
* *
*

*/








