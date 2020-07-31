#include<stdio.h>
void main()
{
int i,j;
int n;
printf("Enter number of stairs\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i*2;j++){
        if(j%2!=0){
            printf("0");
        }
        else{
            printf("1");
        }
    }
    printf("\n");
}


}


