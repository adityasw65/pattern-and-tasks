#include<stdio.h>
void main()
{
  int m=0,rev=0,n=0;
  // rev[0]=0;
  int a=0,b=0;
  printf("\nEnter your value : ");
  scanf("%d",&n);
  int c=n;
  while(n>0)
  {
    m=n%2;
    rev=rev*10+m;
    n=n/2;
    //j++;
  }
  //printf("%d",rev);
  while(rev>0)
  {
    a=rev%10;
    b=b*10+a;
    rev=rev/10;
  }
  printf("Binary number of %d is this %d\n",c,b);
}



