#include<stdio.h>
void main()
{
  int i,j,m=6,n=9,q=4;
  printf("\n"); 
  for(i=0;i<=10;i++)
  {
    for(j=0;j<=10;j++)
    {
      if(i<=3 && (j==m-i || j==m))
        printf("*");
      else if(i==4 && (j==m-i || j>=m))
        printf("*");
      else if(i==5 && (j==m-i || j==n))
        printf("*");
      else if(i==6 && (j<=q || j==n))
        printf("*");
      else if(i>=7 && (j==q || j==n))
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i>=5)
      n--;
  }
}




