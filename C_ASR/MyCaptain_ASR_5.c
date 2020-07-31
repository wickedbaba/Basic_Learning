#include<stdio.h>
int sumofdigits(int sum){
if(sum==0){
    return 0;
}
else{
   return(sum%10+sumofdigits(sum/10));
}
}

void main()
{
    int n;
printf("Enter the number\n");
scanf("%d",&n);
printf("%d",sumofdigits(n));
}


