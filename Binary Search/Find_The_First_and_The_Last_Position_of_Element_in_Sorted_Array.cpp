#include<bits/stdc++.h>
using namespace std;

//vector<int>
vector<int> b_search(vector<int>& arr,int n,int t){
    int low=0,high=n-1;
    int mid;
    int ans=0;
    vector<int>result;
    int first,last;
 while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==t and arr[mid-1]!=t or arr[0]==t){
            first=mid;
    result.push_back(first);
    break;
            // return first;
        }
        else if(arr[mid]==t){
            high=mid-1;
        }
      else if(arr[mid]>t){
           high=mid-1;
        //    last=mid;
       }
       else{
           low=mid+1;
        //    first=mid;
       }
    }
    //************************
    low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==t and arr[mid+1]!=t or arr[n-1]==t){
            last=mid;
            // return first;
    result.push_back(last);
    break;
        }
        else if(arr[mid]==t){
            low=mid+1;
        }
      else if(arr[mid]>t){
           high=mid-1;
        //    last=mid;
       }
       else{
           low=mid+1;
        //    first=mid;
       }
    }
   
    if(result.size()==0){
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
    return result;
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;cin>>t;
    
   vector<int> p= b_search(arr,n,t);
   cout<<p[0]<<" "<<p[1]<<endl;
// cout<<p<<endl;

    return 0;
}