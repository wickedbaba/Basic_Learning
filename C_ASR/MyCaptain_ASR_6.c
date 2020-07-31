#include<stdio.h>
#include<stdbool.h>
bool prime(int n,int i){

if(n<=i)
    return true;
else if(n%i==0)
    return false;

    return prime(n,i+2);

}

void main()
{
    int n;
    printf("Enter The number\n");
    scanf("%d",&n);
    if(n<=2){
    return n==2?   printf("The Number Is prime\n"):printf("The Number Is Not Prime\n");
}
   else if(prime(n,3)&&n%2!=0)    {
        printf("The Number Is prime\n");
    }
    else{
        printf("The Number Is Not Prime\n");
    }

}


