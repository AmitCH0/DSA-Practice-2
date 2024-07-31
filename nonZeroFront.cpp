#include<bits/stdc++.h>
using namespace std;
int * nonZeroFront(int arr[],int n){
    vector<int> temp={};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
    return arr;
}
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nonZeroFront(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}