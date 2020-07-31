#include<stdio.h>

void main(){
 int a,b;
 printf("Enter two numbers to be swapped");
 scanf("%d%d",&a,&b);
 printf("\nBefore swapping-\n%d %d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
  printf("\nAfter swapping-\n%d %d",a,b);

}
