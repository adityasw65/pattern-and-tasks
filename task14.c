#include<stdio.h>
void main()
{
  int i,j,k=1;
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=6;j++)
    {
      if((j<=3-i || j>=3+i) && i<=3)
        printf(" ");
      else if((j<=i-3 || j>=6-k) && i>3)
        printf(" ");
      else 
        printf("*");
      printf(" ");
    }
    printf("\n");
    if(i>3)
      k++;
  }
}

/*
output:-
diamond star pattern..
*/
