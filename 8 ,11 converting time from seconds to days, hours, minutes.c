#include<stdio.h>
//converting time of resolution from second to day,hour, minutes 
int main()
{
       int t,days,minutes,hours,x,y;
       printf("Enter time in seconds (the time of revolution of earth is 31551850 sec\n");
       scanf("%d",&t);
       days=t/86400,x=t%86400;
       hours=x/3600,y=x%3600;
       minutes=y/60;
       printf("The time is equal to %d days %d hours %d minutes ",days,hours,minutes);
       return 0;
}
      