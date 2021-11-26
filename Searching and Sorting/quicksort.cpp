#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int s,int e){
    int pivot=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[e]);
    
    return (i+1);
    
}


void quicksort(vector<int>&arr,int s,int e){
    int i=s,j=e;
    if(i>=j){
        return;
    }
    int pi=partition(arr,s,e);
    quicksort(arr,s,pi-1);
    quicksort(arr,pi+1,e);
}




int main(){
    vector<int>arr={3,5,7,0,10,11,2,1,9};
    int s=0,e=arr.size()-1;
    quicksort(arr,s,e);
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;    
    return 0;

}