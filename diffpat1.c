#include<stdio.h>
void main()
{
  int i,j,k;
  printf("\n");
  for(i=0;i<=3;i++)
  {
    k=0;//here we define k value bocz we haven't defined above
    for(j=0;j<=3;j++)
    {
      if(j<=i)
      {
        if(i%2==0)
        {
          while(k<=i)
          {
            printf("* ");
            k++;
          }
        }
        else
        {
          while(k<=i)
          {
            printf("# ");
            k++;
          }
        }
      }
    }
    printf("\n"); 
  }
}

/*
output :-
*
##
***
####

*/










