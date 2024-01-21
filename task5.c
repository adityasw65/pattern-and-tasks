#include<stdio.h>
void main()
{
  int i,j,flag;
  for(i=0;i<9;i++)
  {
    for(j=0;j<17;j++)
    {
      if(j>=8-i && j<=8+i && flag==1)
      {
        printf("*");
        flag=0;
      }
      else
      {
        printf(" ");
        flag=1;
      }
    }
    printf("\n");
  }
}

/*
output : 

   *
  * *
 * * *
* * * *

*/



/*
//as per number of columns entered by user 

#include<stdio.h>
void main()
{
	int i,j,k,n,p;
	printf("Enter number of columns : ");
	scanf("%d",&n);
	p=n/2;
	for(i=0;i<=p;i++)
	{
		k=1;
		if(p%2==0)
		{
			for(j=0;j<=n;j++)
			{
				if(j>=p-i && j<=p+i && k)
				{
					printf("*");
					k=0;
				}
				else
				{
					printf(" ");
					k=1;
				}
			}
		}
		
		
		else
		{
			for(j=0;j<n;j++)
			{
				if(j>p-i && j<p+i && k)
				{
					printf("*");
					k=0;
				}
				else
				{
					printf(" ");
					k=1;
				}
			}
		}
		printf("\n");
	}
}
*/











