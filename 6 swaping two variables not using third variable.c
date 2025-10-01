#include<stdio.h>
//swaping two variables not using third variable
int main()
{
     int a,b;
     printf("Enter value of a\n");
     scanf("%d",&a);
     printf("Enter value of b\n");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("The new value of a and b are %d and %d ",a,b);
}     