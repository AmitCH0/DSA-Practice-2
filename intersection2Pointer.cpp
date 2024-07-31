#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int n1,int b[],int n2){
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(a[i]<b[j])
            i++;
        else if(b[j]<a[i])
            j++;
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    } 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr1[]={1,2,3,5,6};
    int arr2[]={1,5,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,n1,arr2,n2);
    

}