#include<stdio.h>
void main()
{
  int i,j,k=2;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=3;j++)
    {
      if(j<=i && i<=3)
        printf("*");
      else if(i>3 && j<=i-k)
        printf("*");
      else 
        printf("    "); // 4 spaces 
      printf("    "); // 4 spaces
    }
    printf("\n\n"); // 2 new lines
    if(i>3)
      k=k+2;
  }
}

/*
output:-

*
* *
* * *
* * * *
* * *
* *
*

*/




