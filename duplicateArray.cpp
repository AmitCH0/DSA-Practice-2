#include<bits/stdc++.h>
using namespace  std;
int duplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    int arr[]={2,2,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=duplicate(arr,n);
    cout<<"size of array after removing all duplicate elements :"<<endl;
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }    

}