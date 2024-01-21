#include<stdio.h>
void main()
{
  int i,j,k=1;
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=2;j++)
    {
      if(i<=2 && j<=i)
        printf("%c",65+j);
      else if(i>2 && j<=k)
        printf("%c",65+j);
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i>2)
      k--;
  }
}




