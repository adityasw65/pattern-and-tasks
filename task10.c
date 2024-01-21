#include<stdio.h>
void main()
{
  int i,j,flag=1;
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(j>=i && j<=6-i && flag==1)
      {
        printf("*");
        flag=0;
      }
      else
      {
        printf(" ");
        flag=1;
      }
    }
    printf("\n");
  }
}

/*

* * * *
 * * *
  * *
   *


*/


