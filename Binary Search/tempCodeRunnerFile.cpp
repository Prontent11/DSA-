#include<bits/stdc++.h>
using namespace std;


int main(){


int arr[10]={1,2,3,4,5,6,4,3,2,1};
    int low=0,high=sizeof(arr)-1;
    while(low<=high){
       int mid=low+high/2;
       
        if(arr[mid]>arr[mid+1]){
            high=mid;
        }
        else if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        
    }
    cout<<low;
return 0;
}