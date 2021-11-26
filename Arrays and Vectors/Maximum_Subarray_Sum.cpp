#include<bits/stdc++.h>
using namespace std;


int MaxSum(vector<int>&arr){
    int n=arr.size();
    int ans=0;
    int mx=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
        if(ans<0)ans=0;
        mx=max(ans,mx);
    }

    ans=mx;
    return ans;

}


int main(){
    vector<int>arr={-1,2,3,4,-2,6,-8,3};
    int ans=MaxSum(arr);
    cout<<ans<<endl;
    return 0;
}