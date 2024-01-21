#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
      if(j<4-i)
        printf("%d",4-i);
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}


