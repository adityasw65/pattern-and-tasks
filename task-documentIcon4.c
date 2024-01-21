#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=7;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(i==0 && j<=3)
        printf("*");
      else if((i>=1 && i<=3) && (j>=0 && j<=2) || j==3+i)
        printf("*");
      else if((i>=4 && i<=7) && j<=6)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



