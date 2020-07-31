#include<bits/stdc++.h>
using namespace std;

int main(){
int i,n;
cout<<"Enter the number of elements to be added : ";
cin>>n;
int *p,arr[n];
// to Input array
cout<<"Enter elements : "<<endl;
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
p=arr;
// to output array
cout<<"\nYou Entered : "<<endl;
for(i=0;i<n;i++){
    cout<<*p<<endl;
    p++;
}

}

