#include<bits/stdc++.h>
using namespace std;
int maximum(int n,int m){
    if(n>m){
        return n;
    }
    else 
        return m;
}
int main(){
    int a[]={0,1,1,1,1,0,0,1,1,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
            maxi=maximum(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<maxi;
}