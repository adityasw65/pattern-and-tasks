#include<stdio.h>
#include<string.h>
void main()
{
  int a,val=0,rem,dig=0;
  int p,r=0,counter=0;
  printf("\nEnter your number : ");
  scanf("%d",&a);
  while(a>0)
  {
    rem=a%10;
    val=(val*10)+rem;
    a=a/10;
    dig++;
  }
  printf("Number in letters : ");
  while(counter<dig)
  {
    r=val%10;
    val=val/10;
    
    if(r==0)
      printf("Zero ");
    else if(r==1)
      printf("one ");
    else if(r==2)
      printf("two ");
    else if(r==3)
      printf("Three ");
    else if(r==4)
      printf("Four ");
    else if(r==5)
      printf("Five ");
    else if(r==6)
      printf("Six ");
    else if(r==7)
      printf("Seven ");
    else if(r==8)
      printf("Eight ");
    else if(r==9)
      printf("Nine ");
    else
      printf("Garbage or invalid");
    
    counter++;
  }  
  printf("\n");
}


/*
output :-

Enter number : 650
number in letters : six five zero

*/



























