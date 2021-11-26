#include<bits/stdc++.h>
using namespace std;

 char b_search(char arr[],int n,char t){
    int low=0,high=n-1;
    int mid;
    int ans=0;
    // if(t>arr[high])return -1;
    while(low<=high){
        mid=(low+high)/2;
        
        if(arr[mid]>t){
            high=mid-1;
            
            }
        else if(arr[mid]<=t)low=mid+1;
    }

    return arr[low % n];
    
}

int main(){
    int n;cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char t;cin>>t;

   cout<< b_search(arr,n,t);

    return 0;
}