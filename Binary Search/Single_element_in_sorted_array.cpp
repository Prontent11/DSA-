#include<bits/stdc++.h>
using namespace std;

int element(vector<int>&arr){
    int low=0,high=arr.size()-2;
    int mid;
    while(low<=high){
        mid=(low+high)>>1;
        if(arr[mid]==arr[mid^1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return arr[low];
}

int main(){
    vector<int>arr={1,1,2,2,3,4,4,5,5};
    int ans=element(arr);
    cout<<ans;
    return 0;
}