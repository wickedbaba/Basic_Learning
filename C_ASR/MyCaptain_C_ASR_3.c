#include<stdio.h>
void main()
{
int n;
printf("Enter the number\n");
scanf("%d",&n);
switch(n)
{
    case 1:
                printf("Food Item - Pizza \nPrice - Rs239\n");
                break;
    case 2:
                printf("Food Item - Burger \nPrice - Rs129\n");
                break;
    case 3:
                printf("Food Item - Pasta \nPrice - Rs179\n");
                break;
    case 4:
                printf("Food Item - French Fries \nPrice - Rs99\n");
                break;
    case 5:
                printf("Food Item - Sandwich \nPrice - Rs149\n");
                break;
    default:
        printf("Enter valid number\n");
}

}

