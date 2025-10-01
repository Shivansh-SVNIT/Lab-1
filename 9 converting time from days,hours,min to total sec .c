# include<stdio.h> 
int main()
//converting time from days,hours,min to total sec
{
        int days,hours,minutes,total;
        printf("Enter time in days\n");
        scanf("%d",&days);
        printf("Enter time in hours\n");
        scanf("%d",&hours);
        printf("Enter time in minutes\n");
        scanf("%d",&minutes);
        int d=24*60*60*days;
        int h=60*60*hours;
        int m=60*minutes;
        total=d+h+m;
        printf("The total time in seconds is %d",total);
        return 0;
}
