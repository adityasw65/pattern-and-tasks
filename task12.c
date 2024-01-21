 #include<stdio.h>
void main()
{
  int i,j,k=1;
  printf("\n");
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=7;j++)
    {
      if(j<=k)
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
      k=k+2;
  }
}



