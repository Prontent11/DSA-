#include<bits/stdc++.h>
using namespace std;

int b_search(vector<int>&arr,int n,int t){
    int low=0,high=n-1;
    int mid;
    int ans=0;
    if(t>arr[high])return -1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==t)return mid;
        else if(arr[mid]>t){
            high=mid-1;
            
            }
        else if(arr[mid]<t)low=mid+1;
    }
    // now if the no. is not presetn inside given array low will become greater than high which will break the loop and low will be pointing to the smallest no. greatr than the target element 

    return high;//if it is asked to you to return the floor of no. then return arr[high]
    // return low;//if it is asked to you to return the ceil of no. then return arr[low]
    
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;cin>>t;

   cout<< b_search(arr,n,t);

    return 0;
}