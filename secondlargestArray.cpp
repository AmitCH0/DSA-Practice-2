#include<bits/stdc++.h>
using namespace std;
// int secLargest(int arr[],int n){
//     //1 pass finding largest number 
//     int largest=INT_MIN;                                     better approach
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     //2 pass finding second largest number
//     int secMax=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>secMax && arr[i]<largest){
//             secMax=arr[i];
//         }
//     }
//     return secMax;
// }
int secLargest(int arr[],int n){
    int largest=0;
    int slargest=-1;                                //optimal solution
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int main(){
    int arr[]={1,4,6,2,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Second Largest number of the array : "<<secLargest(arr,n)<<endl;
}