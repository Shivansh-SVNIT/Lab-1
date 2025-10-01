#include<stdio.h>
//calculating gross salary
int main()
{
       int salary,house_rent,bonus,other;
       printf("Enter basic Salary\n");
       scanf("%d",&salary);
       printf("Enter house rent\n");
       scanf("%d",&house_rent);
       printf("Enter ammount of bonus\n");
       scanf("%d",&bonus);
       printf("Enter other ammount\n");
       scanf("%d",&other);
       printf("gross salary is equal to %d",salary+house_rent+bonus+other);
       return 0;
}
      