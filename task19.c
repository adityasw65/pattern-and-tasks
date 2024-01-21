#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=12;i++)
  {
    for(j=0;j<=10;j++)
    {
      if((i==0 || i==6) && j<=10)
        printf("*");
      else if((i==2 || i==4) && j<=10 && j!=4 && j!=6)
        printf("*");
      else if(i==3 && j>=4 && j<=6)  
        printf("*");
      else if((j==0 || j==10) && i<=6)
        printf("*");
      else if(j==0)
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




