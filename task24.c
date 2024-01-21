#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=15;i++)
  {
    for(j=0;j<=8;j++)
    {
      if((i==0 || i==14) && j>=1 && j<=7)
        printf("*");
      else if(i==1 && (j==0 || j>=3 && j<=5 || j==8))
        printf("*");
      else if(i==2 && (j==0 || j==4 || j==8))
        printf("*");
      else if(i>=3 && i<=11 && (j==0 || j==8))
        printf("*");
      else if(i==12 && j<=8)
        printf("*");
      else if(i==13 && (j==0 || j==3 || j==5 || j==8))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




