#include<stdio.h>
void main()
{
  char str[100];
  int i;
  printf("\nEnter your binary number : ");
  scanf("%s",str);
  printf("your number is : %s",str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='0')
      str[i]='1';
    else
      str[i]='0';
  }
  printf("\nreplaced number is : %s\n",str);
}