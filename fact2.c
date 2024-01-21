#include<stdio.h>
int fact(int,int);
void main()
{
  int a,c,b=1;
  printf("\nEnter your number for factorial number : ");
  scanf("%d",&a);
  c=fact(a,b);
  printf("\nFactorial number of you have entered is : %d\n",c);
}

int fact(int x, int y)
{
  y=y*x;
  x--;
  if(x>0)
    fact(x,y);
  else
    return y;
}




