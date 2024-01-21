#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=5;i++)
  {
    for(j=0;j<=7;j++)
    {
      if(i==0 && (j==1 || j==2))
        printf("*");
      else if(i==1 && (j==0 || j==3))
        printf("*");
      else if(i==2 && (j==0 || j==3 || j==5 || j==6))
        printf("*");
      else if(i==3 && (j==1 || j==4 || j==7))
        printf("*");
      else if(i==4 && (j==2 || j==6))
        printf("*");
      else if(i==5 && (j==3 || j==4 || j==5))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}


