#include<bits/stdc++.h>
using namespace std;


int lb(vector<int>arr,int n,int t){
    int low=0,high=n-1;
    int res1=0,res2(0);
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]<t){
            low=mid+1;
        }
        else if(arr[mid]>t){
            res1=mid;
            high=mid-1;

        }
        else{
             res1=mid;
            high=mid-1;
        }
    }
    return res1;
  
    }
   
int ub(vector<int>arr,int n,int t){
    int low=0,high=n-1;
    int res1=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<t){
            low=mid+1;
        }
        else if(arr[mid]>t){

            high=mid-1;

        }
        else{
             res1=mid;
            low=mid+1;
        }
    }
    return res1;
  
    }
   
    



int main(){
    int t=1;
    vector<int>arr;
    arr={0,1,1,1,4,5,7};
    int n=arr.size();
    cout<<ub(arr,n,t)-lb(arr,n,t)+1;
}