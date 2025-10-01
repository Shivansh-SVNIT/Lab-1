# include<stdio.h> 
int main()
//finding cut off mark
//M maths,P physics,C chemistry,E entrance exam mark
{
        int M,P,C,E,CM;
        printf("Enter marks in maths out of 200\n");
        scanf("%d",&M);
        printf("Enter marks in physics out of200\n");
        scanf("%d",&P);
        printf("Enter marks in chemistry out of 200\n");
        scanf("%d",&C);
        printf("Enter marks in Entrance Examination out of 100\n");
        scanf("%d",&E);
        
        CM=M/2+P/2+C/2+E;
        printf("The cut off marks is %d",CM);
        return 0;
}        