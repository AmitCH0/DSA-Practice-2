#include<bits/stdc++.h>
using namespace std;
int* shiftByOne(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    int arr[]={2,4,5,6,12,13,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    shiftByOne(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}