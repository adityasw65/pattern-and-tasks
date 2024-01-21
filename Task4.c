#include<stdio.h>
void main()
{
	int i,j,n,q=1;
	printf("Enter your number : ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=n-q)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		q++;
		printf("\n");
	}
}

/*

    *
   **
  ***
 ****
*****

*/











