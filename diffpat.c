#include<stdio.h>
void main()
{
  int i,j,a=1,k,b=0;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    k=0;
    for(j=0;j<=6;j++)
    {
      if(j<=i)
      {
        if(i%2==0)
        {
          while(k<=i)
          {
            printf("%d ",a);
            k++;
          }
        }
        else
        {
          while(k<=i)
          {
            printf("* ");
            k++;
          }
        }
      }
    }
    printf("\n");
    a=a+b;
    if(b==0)
      b=1;
    else
      b=0;
  }
}

/*
output :-

1
**
222
****
33333

*/








