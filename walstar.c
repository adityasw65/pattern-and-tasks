#include<stdio.h>
void main()
{
  int i,j,x=1, flag;
  printf("\nCode asked in the walstar company aptitude\n\n");
  for(i=0; i<6; i++)
  {
   
    for(j=0; j<11; j++)
    {
      
      if(j>=5-i && j<=5+i && flag==0)
      {
          if(i < 2)
          {
            if(j == 5 + i || j == 5 - i)
            {
              printf("1");
            }
            else
            {
              printf("%d", x);
             
            }
          }
          else
          {
            if(j == 5 + i || j == 5 - i)
            {
              printf("1");
            }
            else
            {
              x = i;
              printf("%d", x);
            
            }
          }
          
        flag = 1;
      }
      else
      {
        printf(" ");
        flag = 0;
      }
      
      printf(" ");
    }
    printf("\n");
  }
}




