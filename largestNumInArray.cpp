#include<bits/stdc++.h>
using namespace std;
int largestNum(int arr[],int n){
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    return mx;
}
int main(){
    int arr[]={10,20,32,34,21,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"largest number is : "<<largestNum(arr,n)<<endl;
}