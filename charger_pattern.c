// charger pattern 
#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i = 0; i <= 10; i++)
  {
    for(j = 0; j <= 7; j++)
    {
      if(i<=3 && (j==2 || j==5))
        printf("*");
      else if((i>=4 && i<=6) && j>=1 && j<=6)
        printf("*");
      else if(i>=7 && j>=0 && j<=7)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}

