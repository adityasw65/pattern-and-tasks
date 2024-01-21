// key structure using star pattern.........

#include<stdio.h>
void main()
{
  int i,j,n=18;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=21;j++)
    {
      if(i<=1 && j>=n-i && j<=n+i)
        printf("*");
      else if(i==2 && j<=n+i)
        printf("*");
      else if(i==3 && j>=i-2 && j<=n+i)
        printf("*");
      else if(i==4 && j>=i-2 && j<=n+2)
        printf("*");
      else if(i==5 && ((j>=i-2 && j<=i) || (j>=n-1 && j<=n+1)))
        printf("*");
      else if(i==6 && (j==i-2 || j==n))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



