#include<stdio.h>
//calculating simple interest
int main()
{
       int P,R,T;
       printf("Enter Principal\n");
       scanf("%d",&P);
       printf("Enter Rate\n");
       scanf("%d",&R);
       printf("Enter Time\n");
       scanf("%d",&T);
       printf("the value of simple interest is =%d",P*R*T/100);
       return 0;
}       
       
      