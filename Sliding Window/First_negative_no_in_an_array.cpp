#include<bits/stdc++.h>
using namespace std;
void First_negative_no(vector<int>&arr,int k,int n){
    int i=0,j=0;
    vector<int>result;
    deque<int>list;
    while(j<arr.size()){
        if(arr[j]<0) list.push_back(arr[j]);
        
        
         if(j-i+1<k){
            j++;continue;
        }
        else if(j-i+1==k){
            if(!list.empty()) result.push_back(list.front());
            else result.push_back(0);
            
            if(list.front()==arr[i]){
                    list.pop_front();
                }
                i++;
                j++;
        }
    }
     for(int item:result) cout<<item<<" ";
	    cout<<endl;
}


int main(){
    vector<int>arr={1,-1,2,-1,-4,1,-3,2,1,1};
    int k=3;
    int n=arr.size();
    First_negative_no(arr,k,n);
}