#include<bits/stdc++.h>
using namespace std;

int  merge(vector<int>&arr,int s,int e){
    int i=s;
    int m=(s+e)>>1;
    int inv=0;
    int j=m+1;
    vector<int>temp; 
    while(i<=m and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else {  
            temp.push_back(arr[j]);
            inv+=m-i+1;
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
    return inv;
}


int mergesort(vector<int>&arr,int s,int e){
    if(s>=e){
        return 0;
    }
    int inv=0;
    int mid=(s+e)/2;
    inv+= mergesort(arr,s,mid);
    inv+=mergesort(arr,mid+1,e);
    inv+=merge(arr,s,e);
    return inv;

}

int main(){
    vector<int>arr={0,5,1,2,3};
    int s=0,e=arr.size()-1;
   int a= mergesort(arr,s,e);
    // for(auto x:arr)cout<<x<<" ";
    // cout<<endl;   
    cout<< a;
    return 0;

}