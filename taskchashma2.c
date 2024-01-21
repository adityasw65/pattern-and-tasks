#include<stdio.h>
void main()
{
  int i,j,m=5,n=17;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=17;j++)
    {
      if(i<=3 && (j==m || j==n))
        printf("*");
      else if(i==4 && ((j>=1 && j<=5) || (j>=7 && j<=10) || j==13))
        printf("*");
      else if(i==5 && j>=0 && j<=12)
        printf("*");
      else if(i==6 && ((j>=2 && j<=5) || (j>=7 && j<=10)))
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
    m--;
    n--;
  }
}




