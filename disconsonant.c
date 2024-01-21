#include<stdio.h>
void main()
{
  char str[100];
  int i;
  printf("\nEnter your string : ");
  scanf("%s",&str);
  printf("\nOriginal string is : %s",str);
  
  printf("\n\nConsonant from above string is : ");
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
    {
      printf("%c ",str[i]);
    }
  }
  printf("\n");
}

/*

output :-

Aditya

d t y

*/




