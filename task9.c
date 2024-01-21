#include<stdio.h>
void main()
{
  int i,j,k=0;
  for(i=0;i<=10;i++)
  {
    for(j=0;j<=10;j++)
    {
      if(j==k || j==10-k)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
    if(i<5)
      k++;
    else
      k--;
  }
}


/*
output:-

*     *  
 *   *
  * *
   *
  * *
 *   * 
*     *


*/