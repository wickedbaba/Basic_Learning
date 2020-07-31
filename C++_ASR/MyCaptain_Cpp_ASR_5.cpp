#include<bits/stdc++.h>
using namespace std;

int prime(int a){
    int i,c=0;
    for(i=2;i<=a/2;i++){
            if(a%i==0){
                c++;
            }
        }
    if(c==0&& a!=0)
        return 1;
    else
        return 0;
}

void sumofprime(int n){
cout<<"The number can be expressed as : "<<endl;
int i,a;

for(i=n;i>=n/2;i--){
a=n-i;
    if(prime(a)&&prime(i)){
        cout<<n<<"="<<a<<"+"<<i<<endl;
    }
}

}

int main(){
int n;
cout<<"Enter the number : ";
cin>>n;
sumofprime(n);
return 0;
}

