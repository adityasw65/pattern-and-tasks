#include<stdio.h>
void main()
{
  int i,j,k=0,m=0;
  for(i=0;i<=4;i++)
  {
    if(i<=2)
    {
      k=0;m++;
    }
    else 
    {
      k=k+2;m--;
    }
    
    for(j=0;j<=2;j++)
    {
      if(j<=i-k)
        printf("%d",m);
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




