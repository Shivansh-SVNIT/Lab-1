#include<stdio.h>
//Declaring grade of 5 subjects
int main()
{
       int physics,chemistry,maths,English,computer;
       printf("Enter marks of physics\n");
       scanf("%d",&physics);
       printf("Enter marks of chimistry\n");
       scanf("%d",&chemistry);
       printf("Enter marks of maths\n");
       scanf("%d",&maths);
       printf("Enter marks of English\n");
       scanf("%d",&English);
       printf("Enter marks of computer\n");
       scanf("%d",&computer);
       float p;
       p=(float)(physics+chemistry+maths+computer+English)/5;
       
       int y;
       y=(physics>=33 && maths>=33 && chemistry>=33 && English>=33 && computer>=33);
       
       if(y>=1)
       {
       
          if(p>90)
          {
            printf("Your grade is A1");
          }
           
          else if(p>80 && p<=90)
          {
            printf("Your grade is A2");
          }
        
          else if(p>70 && p<=80)
          {
            printf("Your grade is B1");
          }
       
          else if(p>60 && p<=70)
          {
            printf("Your grade is B2");
          }
       
          else if(p>50 && p<=60)
          {
            printf("Your grade is C1");
          }
       
          else if(p>40 && p<=50)
          {
            printf("Your grade is C2");
          }  
          else
          {
            printf("Your grade is D");
          }
       }
       
       else
          {
            printf("You Failed Examination");
          }  
       return 0;
}
      