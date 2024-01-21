#include<stdio.h>
void main()
{
  int i,j,k=1,m=6;
  printf("\n");
  for(i=0;i<=10;i++)
  {
    for(j=0;j<=6;j++)
    {
      if((i==0 || i==5) && j==1)
        printf("*");
      else if(i>=1 && i<=4 && (j==0 || j==2))
        printf("*");
      else if(i==m && j>=k && j<=m)
        printf("*");
      else if(i>=7 && i<=8 && (j==k || j==m))
        printf("*");
      else if(i>8 && (j==k || j==m))
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i>=8)
    {k++; m--;}
  }
}

