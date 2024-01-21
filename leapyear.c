#include<stdio.h>
void main()
{
  int year;
  printf("\nEnter your year : ");
  scanf("%d",&year);
  
  if(year%400==0)
    printf("\n%d year is leap year\n",year);
  else if(year%4==0)
    printf("\n%d year is Leap year\n",year);
  else 
    printf("\n%d year is not leap year\n",year);
}


