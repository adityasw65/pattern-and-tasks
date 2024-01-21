#include<stdio.h>
void main()
{
  int i,j,a[5],c=0,b=0;
  printf("\nEnter your 5 data : ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  b=a[0];
  for(i=0;i<5;i++)
  {
    if(b<=a[i+1])
      c=b;
    else
      b=a[i+1];
  }
  if(b<c)
    printf("\nSmallest number from your data is : %d",b);
  else
    printf("\nSmallest number from your data is : %d",c);
  
  b=a[0];
  for(i=0;i<5;i++)
  {
    if(b>=a[i+1])
      c=b;
    else
      b=a[i+1];
  }
  if(b>c)
    printf("\nSmallest number from your data is : %d",b);
  else
    printf("\nSmallest number from your data is : %d",c);
  
}


/*void main()
{
  int i,j,a[5],c=0,b=0;
  printf("\nEnter your 5 data : ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  b=a[0];
  for(i=0;i<=5;i++)
  {
    if(b<=a[i+1])
      c=b;
    else
      b=a[i+1];
  }
  printf("\nSmallest number from your data is : %d",c);
  
  b=a[0];
  for(i=0;i<=5;i++)
  {
    if(b>=a[i+1])
      c=b;
    else
      b=a[i+1];
  }
  printf("\nSmallest number from your data is : %d",c);
}
*/







