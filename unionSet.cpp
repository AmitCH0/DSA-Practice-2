#include<bits/stdc++.h>
using namespace std;
void unnnion(int a[],int n1,int b[],int n2){
    set<int> set;
    
    for(int i=0;i<n1;i++){
        set.insert(a[i]);
    }
   for(int i=0;i<n2;i++){
        set.insert(b[i]);
    }
    int j=0;
    vector<int> temp;
    for(auto it:set){
        temp.push_back(it);
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
    int arr1[]={1,2,3,5,6};
    int arr2[]={1,5,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    unnnion(arr1,n1,arr2,n2);

}