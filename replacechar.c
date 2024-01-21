#include<stdio.h>
void main()
{
  char str[100];
  int i;
  printf("\nEnter your string : ");
  scanf("%s",&str);
  printf("\nOriginal string is : %s",str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
      str[i]='#';
    }
  }
  printf("\n\nReplace vowels with '#' string is : %s\n",str);
  
}

/*
output :-

Original string : I_am_Aditya_Waghmare._I_am_19_year_old._I_am_pursuing_the_degree_of_computer_engineering.

Replace vowels with '#' string is : #_#m_#d#ty#_W#ghm#r#._#_#m_19_y##r_#ld._#_#m_p#rs##ng_th#_d#gr##_#f_c#mp#t#r_#ng#n##r#ng.

*/