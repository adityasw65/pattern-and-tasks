#include<stdio.h>
void main()
{
  char str[100];
  int i;
  printf("\nEnter your string : ");
  scanf("%s",&str);
  printf("Original string is : %s",str);
  
  printf("\nNumber from above string is : ");
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9') 
    {
      printf("%c ",str[i]);
    }
  }
  printf("\n");
}