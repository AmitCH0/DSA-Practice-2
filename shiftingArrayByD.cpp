#include<bits/stdc++.h>
using namespace std;
int* shiftByD(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    //int j=0
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)]; //temp[j]
    }
    return arr;
}
int main(){
    // int arr[]={2,4,5,6,12,13,45};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int d=3
    int n;
    cout<<"Enter size of the Array : ";
    cin>>n;
    int arr[n];
     cout<<"Enter array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
     cout<<"Enter how much you want shift : ";
    cin>>d;
    shiftByD(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}