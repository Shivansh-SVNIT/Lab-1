#include<stdio.h>
//charector identification 
int main()
{
       char x;
       printf("Enter the number x\n");
       scanf("%c",&x);
       int a;
       a=x;
       
       if(a>=97 && a<=122)
            {
                 printf("Your charector is small letter");
            }
       else if(a>=65 && a<=90)
            {
                 printf("Your charector is capital letter");
            }
       else if(a>=48 && a<=57)
            {
                 printf("Your charector is Decimal value");
            }
       else if((a>=32 && a<=47) || (a<=58 && a>=64) || (a<=91 && a>=96) || (a<=123 && a>=126))
            {
                 printf("Your charector is special charector");
            }
       else
           {
                printf("Error");
           }     
}