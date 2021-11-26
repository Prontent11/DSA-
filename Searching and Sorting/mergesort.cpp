#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int s,int e){
    int i=s;
    int m=(s+e)>>1;
    int j=m+1;
    vector<int>temp; 
    while(i<=m and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else {  
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(arr[i]);
            i++; 
    }
    while(j<=e){
         temp.push_back(arr[j]);
            j++;
    }
    int k=0;
    for(int i=s;i<=e;i++){
        arr[i]=temp[k++];
    }
    
    
    return;
}


void mergesort(vector<int>&arr,int s,int e){
    if(s>=e){
        return ;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);


}

int main(){
    vector<int>arr={3,5,7,2,1,9};
    int s=0,e=arr.size()-1;
    mergesort(arr,s,e);
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;    
    return 0;

}