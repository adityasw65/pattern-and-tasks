#include<stdio.h>
void main()
{
  int i,j,k,m=0;
  printf("\n");
  for(i=0;i<=9;i++)
  {
    k=0;
    for(j=0;j<=9;j++)
    {
      if(i==0 && j>=3 && j<=9)
        printf("*");
      else if(i>=1 && i<=2 && (j==3 || j==3-i || j==9 || j==9-i))
        printf("*");
      else if(i==3 && (j<=9-i || j==9))
        printf("*");
      else if(i>=4 && i<=5 && (j==k))
        printf("*");
      else if(i==6 && ((j==0) || (j>=3 && j<=9)))
        printf("*");
      else if(i>=7 && i<=8 && (j==0 || j==6 || j==2-m || j==8-m))
        printf("*");
      else if(i==9 && j<=6)
        printf("*");
      else 
        printf(" ");
      printf(" ");
      
      if((i>=4 && i<=5) && (j==k))
        k=k+3;
      
    }
    printf("\n");
    if(i==7 || i==8)
      m++;
  }
}






