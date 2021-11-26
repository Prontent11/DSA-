#include<bits/stdc++.h>
using namespace std;
void housing(vector<int>&arr,int k,int n){
    int i=0,j=0,cnt=0;
    int diff(0),loc1(0),loc2(0),prev(INT_MAX);
    vector<int>result;
    
    while(j<n){
        if(arr[j]<0) arr[j]=0;
        cnt+=arr[j];
        // j++;
        while(cnt>k and i<j){
            cnt-=arr[i];
            i++;
        }
        if(cnt==k){
            diff=(j-i)+1;
            if(prev>diff){
                prev=diff;
                loc1=i;
                loc2=j;
                
            }

        }
        j++;
    }
    // cout<<prev;
    cout<<loc1<<loc2<<endl;
}


int main(){
    vector<int>arr={1,3,2,1,4,1,3,2,1,1};
    int k=8;
    int n=arr.size();
    housing(arr,k,n);
}