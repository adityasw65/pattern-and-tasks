#include<stdio.h>
void main()
{
  int a,b,c=0;
  printf("\nEnter your data : ");
  scanf("%d",&a);
  
  while(a>0)
  {
    b=a%10;
    c=c+b;
    a=a/10;
  }
  printf("\nAddition of entered number is : %d",c);
  printf("\nThank you universe!");
}