// bufferoverflow example

#include<stdio.h>
void main()
{
  int k=150;
  void fun(k)
  {
    if(k>155)
      printf("HEllw");
    printf(k);
    fun(k+2);
    printf(k);
  }
}



