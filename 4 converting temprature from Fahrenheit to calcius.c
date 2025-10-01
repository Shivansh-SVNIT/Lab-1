#include<stdio.h>
//converting temprature from Fahrenheit to calcius
int main()
{
       float frt;
       printf("Enter temparature in fahrenheit\n");
       scanf("%f",&frt);
       printf("Temperature in calcius is equal to %f",((frt-32)*5)/9);
       return 0;
}
      