#include<stdio.h>
void main()
{
  int i,j,k=8;
  printf("\n");
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=8;j++)
    {
      if((i==0 || i==4 || i==8) && j<=8)
        printf("*");
      else if(j==0 || j==4 || j==8 || j==i || j==k)
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
    k--;
  }
}





