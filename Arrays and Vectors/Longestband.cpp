#include<bits/stdc++.h>
using namespace std;

int longestband(vector<int>&arr){
    int n=arr.size();
    unordered_set<int>s;
    for(int x:arr){
        s.insert(x); 
    }
    int mx(1);
    for (auto element:s)
    {
       int prev_element=element-1;
       if(s.find(prev_element)==s.end()){
                int cnt(1);
                int next_element=element+1;
                
           while(s.find(next_element)!=s.end()){
                next_element++;
                cnt++; 
           }
            mx=max(mx,cnt);
       }
    }
    return mx;
}

int main(){
    vector<int>arr={1,9,3,0,18,5,2,4,10,7,12,6};

    int ans=longestband(arr);
    cout<<ans;
    return 0;
}