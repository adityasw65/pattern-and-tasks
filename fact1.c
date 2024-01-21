#include<stdio.h>
void main()
{
  int a,b=1;
  printf("Enter your value : ");
  scanf("%d",&a);
  while(a>=1)
  {
    b=b*a;
    a=a-1;
  }
  printf("Factorial number of is : %d",b);
}

/*

fact of 5 is 120

*/



