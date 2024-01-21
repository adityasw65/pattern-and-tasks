#include<stdio.h>
void main()
{
  int i,j,k=65;
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(j>=3-i && j<=3+i)
      {
        printf("%c",k);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
    k++;
  }
}



/*
output:- 

   A
  BBB
 CCCCC
DDDDDDD


*/












