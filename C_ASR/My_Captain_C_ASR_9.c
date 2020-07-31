#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
int empno;
char empname[100];
char dept[100];
int salary;
struct employee * next;
}employee;


employee* insert(employee*);
void display(employee *);
void main()
{
  int choice, element;
    employee *head=NULL;
    while(1)
    {
        printf("\n1. To enter details of employee \n");
        printf("2. To display all details\n");
        printf("3. Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                head=insert(head);
                break;

            case 2:
                display(head);
                break;

            case 3:
                exit(0);

            default:
                printf("Enter valid option\n");
        }
    }
}



employee* insert(employee* emp)
{
    employee* temp=(employee*)malloc(sizeof(employee));
     int choice=0 ;


    while(choice!=5)
    {
    printf("To enter the details of the employee choose an option-\n");
    printf("1 To Enter the employee number-\n");
    printf("\n2 To enter the employee's name-\n");
     printf("\n3 To enter the employee's department-\n");
     printf("\n4 To enter the employee's salary-\n");
     printf("\n5 Exit to Main Menu\n");
    scanf("%d",&choice);

    switch(choice)
    {
case 1:
    printf("Enter the employee number-\t");
    scanf("%d",&temp->empno);
    break;

case 2:
    printf("\n Enter employee's name(single word)-\n");
    scanf("%s",&temp->empname);
    break;

case 3:
    printf("\n Enter the employee's department(single word)-\n");
    scanf("%s",&temp->dept);
   break;

case 4:
    printf("\n Enter the employee's salary-\t");
    scanf("%d",&temp->salary);
    break;

case 5:
    choice =5;
    break;

    default:
    printf("Enter valid option\n");
    }

    }
        temp->next=emp;
        emp=temp;
        return emp;
}

void display(employee *h)
{
    if(h==NULL)
        printf("List is Empty\n");
    else
    {
        while(h!=NULL)
        {
    printf("\nEmployee's number -%d",h->empno);
    printf("\n employee's name-\t %s",h->empname);
    printf("\n employee's department-\t %s",h->dept);
    printf("\n employee's salary-\t %d",h->salary);
    h=h->next;
        }
    }
}
