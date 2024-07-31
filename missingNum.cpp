#include<bits/stdc++.h>
using namespace  std;
void missing(int a[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]=1;
    }
    for(int i=0;i<n;i++){
        if(hash[i]==0){
            cout<<i;
        }
    }
}
int main(){
    int a[]={1,2,4,5};
    int n=5;
    missing(a,n);
}