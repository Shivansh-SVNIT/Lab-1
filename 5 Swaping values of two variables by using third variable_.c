#include<stdio.h>

// Swaping values of two variables by using third variable

int main()

{
      int a,b,c;
      
      printf("Enter value of a \n");
      scanf("%d",&a);
      
      printf("Enter value of b \n");
      scanf("%d",&b);
      
      c=a+b;
      
      printf("the new value of (a,b) is (%d,%d)",c-a,c-b);
      
      return 0;
}      
      