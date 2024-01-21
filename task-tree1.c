#include<stdio.h>
void main()
{
  int i,j,a=0;
  for(i=0;i<=11;i++)
  {
    for(j=0;j<=9;j++)
    {
      if(i<=4 && (j>=4-i && j<=5+i))
        printf("*");
      else if(i==5 && (j>=1 && j<=8))
        printf("*");
      else if(i==6 && (j>=2 && j<=7))
        printf("*");
      else if((i>=7 && i<=9) && (j==4 || j==5))
        printf("*");
      else if(i>=10 && (j==3-a || j==6+a))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i==10)
      a++;
  }
}




