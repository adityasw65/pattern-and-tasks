//user input no. of star program

#include<stdio.h>
void main()
{
  int i,j,n,m=0;
  printf("Enter your numbers of start that you are printing : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {  
    printf("\t");
    for(j=0;j<n;j++)
    {
      if(j<=(n/2)-m || j>=(n/2)+m)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    
    if(i<(n/2))
    {
      m++;
    }
    else
    {
      m--;
    }
    
    printf("\n");
  }
  
  
  printf("\nThis is the program of diamond star");
}

/*
output :-

*******
*** ***
**   **
*     *
**   **
*** ***
*******

*/