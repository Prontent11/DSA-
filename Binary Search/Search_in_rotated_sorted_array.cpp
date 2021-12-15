#include<bits/stdc++.h>
using namespace std;



   
int pivot(vector<int>arr,int n,int t){
    int l=0,h=n-1;
    int pi=0;
    while(l<=h){
        int mid=(h+l)/2;
        if(arr[mid]<arr[0]){
            h=mid-1;
        }
        else if(arr[mid]>arr[0]){
            l=mid+1;
        }
        else if(arr[mid]>arr[mid+1] ){
            return 10;
        }
    }
}



int main(){
    int t=1;
    vector<int>arr;
    arr={5,6,7,1,2,3};
    int n=arr.size();
    int pi=pivot(arr,n,t);
    cout<<pi<<endl;
    
}