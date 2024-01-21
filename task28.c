#include<stdio.h>
void main()
{
  int n=0,i,j,f=0;
  printf("\n");
  for(i=0;i<5;i++)
  {
    n=i+1;
    for(j=0;j<9;j++)
    {
      if((j>=i && j<=8-i) && j%2==0 && f==0)
      {
        printf("%d",n);
        n++;
      }
      else if((j>=i && j<=8-i) && j%2!=0 && f==1)
      {
        printf("%d",n);
        n++;
      }
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(f==0)
      f=1;
    else
      f=0;
  }
}


