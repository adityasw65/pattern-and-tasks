#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter your number : ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

/*

******
 *****
  ****
   ***
    **
     *






*/












