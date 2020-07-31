#include<stdio.h>
void main()
{
char grade;
int marks;
printf("Enter Marks\n");
scanf("%d",&marks);
if(marks<=100){
    if(marks>=85)
            grade='A';
     else if(marks>=70 && marks <=84)
                grade='B';
     else if(marks>=55 && marks <=69)
                grade='C';
     else if(marks<=54 && marks >=40)
                grade='D';
     else if( marks <40)
                grade='F';

printf("Grade %c\n",grade);
}
else{
    printf("\nEnter Valid marks");
}


}

