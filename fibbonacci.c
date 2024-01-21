#include<stdio.h>
void main()
{
  int a=0,b=1,c,num,count=2;
  printf("Enter num : ");
  scanf("%d",&num);
  printf("Fibbonacci series is : ");
  printf("\n%d\n%d",a,b);
  while(count<num)
  {
    c=a+b;
    a=b;
    b=c;
    printf("\n%d",c);
    count++;
  }
  
}

/*
0 1 1 2 3 5 8 13 21.....

*/





