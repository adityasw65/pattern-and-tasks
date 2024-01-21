#include<stdio.h>
void main()
{
  int i,j,k;
  for(i=0;i<=2;i++)
  {
    k=-1;
    for(j=0;j<=4;j++)
    {
      if(j>=i && j<=2)
        k++;
      if(j>2)
        k--;
      
      if(j>=i && j<=4-i)
        printf("%c",65+k);
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




