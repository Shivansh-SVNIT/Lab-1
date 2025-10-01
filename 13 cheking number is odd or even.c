#include<stdio.h>
//cheking number is odd or even
int main()
{
       int x;
       
       printf("Enter the number x\n");
       scanf("%d",&x);
       
       int p=x%2;
       
       switch(p)
       {
           case 1 : printf("%d is odd integer",x);
           case 0 : printf("%d is even integer",x);
       }    
       return 0;
}