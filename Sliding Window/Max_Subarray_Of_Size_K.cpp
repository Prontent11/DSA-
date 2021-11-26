#include<bits/stdc++.h>
using namespace std;
void housing(vector<int>&arr,int k,int n){
    int i=0,j=0,cnt=0;
    int mx=INT_MIN;
    vector<int>result;
    int sum=0;
    while(j<n){
    sum+=arr[j];
    
    if(j-i+1==k){
        mx=max(sum,mx);
        sum-=arr[i];
        i++;
        j++;
    }
    else if(j-i+1<k){
        j++;
    }

    }
    cout<<mx;
}


int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int k=4;
    int n=arr.size();
    housing(arr,k,n);
}