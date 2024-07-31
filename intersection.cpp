#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int n1,int b[],int n2){
    vector<int> ans;
    int vis[n2]={0};
     for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i] == b[j] && vis[j] == 0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i])break;
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