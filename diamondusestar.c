/*This code is for odd and even numbers stars====================>*/
/*

How to run code using terminal :
1. gcc filename.c -o filename
2. filename
3. And type it enter it !

*/
#include<stdio.h>
int main()
{
    int i,j,m,n,val,flag=0,mid;
    printf("Enter your value : ");
    scanf("%d",&val);
    printf("\n");
    /*checking that number is even or odd as per type we can assign value of n & m*/
    if(val%2==0)
    {
        mid=val/2;
        n=mid-1;
        m=mid;
    }
    else
    {
        mid=val/2;
        n=mid;
        m=mid;
    }
    
    /*checking that number is even or odd as per type we can print diamond*/
    if(val%2==0)
    {
        for(i=0;i<val-1;i++)
        {
            for(j=0;j<val;j++)
            {
                if(i>0 && n<j && j<m)
                {
                    printf(" ");
                    if(n==0 && m==val-1)
                    {
                        flag=1;
                    }
                }
                else
                {
                    printf("*");
                }
            }
            if(flag==1)
            {
                n++;
                m--;
            }
            else
            {
                n--;
                m++;
            }
            printf("\n");
        }
    }
    else
    {
        for(i=0;i<val;i++)
        {
            for(j=0;j<val;j++)
            {
                if(i>0 && n<j && j<m)
                {
                    printf(" ");
                    if(n==0 && m==val-1)
                    {
                        flag=1;
                    }
                }
                else
                {
                    printf("*");
                }
            }
            if(flag==1)
            {
                n++;
                m--;
            }
            else
            {
                n--;
                m++;
            }
            printf("\n");
        }
    }
  return 0;  
}

/*_______________________________________________________________________________________________________________________________________________

//this code is only for odd number star==========================>

#include<stdio.h>
int main()
{
    int i,j,m,n,val,flag=0,mid;
    printf("Enter your value : ");
    scanf("%d",&val);
    mid=val/2;
    m=mid;
    n=mid;
    for(i=0;i<val;i++)
    {
        for(j=0;j<val;j++)
        {
            if(i>0 && n<j && j<m)
            {
                printf("\t");
                if(n==0 && m==val-1)
                {
                    flag=1;
                }
            }
            else
            {
                printf("*\t");
            }
        }
        if(flag==1)
        {
            n++;
            m--;
        }
        else
        {
            n--;
            m++;
        }
        printf("\n");
    }
  return 0;  
}
*/