#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<8;i++)
  {
    for(j=0;j<7;j++)
    {
      if(i==0 && j<=3)
        printf("*");
      else if(i==1 && (j>=0 && j<=4))
        printf("*");
      else if(i==2 && (j>=0 && j<=5))
        printf("*");
      else if((i>=3 && i<=6) && (j>=0 && j<=6))
        printf("*");
      else if(i==7)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}

