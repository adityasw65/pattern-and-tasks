// medicine bottle

#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i = 0; i <= 12; i++)
  {
    for(j = 0; j <= 7; j++)
    {
      if((i==0 || i==4) && (j>=2 && j<=5))
      printf("*");
      else if(((i >= 1 && i <= 3) || i==5) && (j==1 || j==6))
      printf("*");
      else if(i>=6 && i<=11 && (j==0 || j==7))
      printf("*");
      else if(i==12 && j>=1 && j<=6)
      printf("*");
      else 
      printf(" ");
      printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}

