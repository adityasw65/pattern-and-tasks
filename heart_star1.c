#include<stdio.h>
void main()
{
  int i,j,m=3,n=11;
  printf("\n");
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=12;j++)
    {
      if(i<=3 && (j==3+i || j==3-i || j==9+i || j==9-i))
        printf("*");
      else if(i>=4 && (j==i-m || j==n))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i>=4)
      n--;
  }
}






