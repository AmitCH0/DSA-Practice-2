#include<bits/stdc++.h>
using namespace std;
int ratHouse(vector<int> &arr,int unit,int r){
    int n=arr.size();                                   //rathouse 
    int total_unit=r*unit;
    int house_unit=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        house_unit+=arr[i];
        cnt++;
        if(house_unit>=total_unit){
            return  cnt; 
        }
    }
    return -1;
}
int main(){
    vector<int> arr={2,8,3,5,2,6,8,10};
    int r=7;
    int unit=2;
    cout<<ratHouse(arr,2,7);
}