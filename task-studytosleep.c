#include<stdio.h>
void main()
{
  int i,j,k=4;
  char a[5]={'s','t','u','d','y'};
  char b[5]={'s','l','e','e','p'};
  printf("\n");
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(j<=4-i && i<=4)
        printf("%c",a[j]);
      else if(j<=i-k && i>4)
        printf("%c",b[j]);
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
  
  /*
  
  int i,j,k=4;
  char a[5]={'S','T','U','D','Y'};
  char b[5]={'S','L','E','E','P'};
  printf("\n");
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(j<=4-i && i<=4)
        printf("%c",a[j]);
      else if(j<=i-k && i>4)
        printf("%c",b[j]);
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
  
  */
}




