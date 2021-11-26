#include<bits/stdc++.h>
using namespace std;
void Occurence(string s1,int n,string s){
    int i=0,j=0,cnt=0;
    unordered_map<char,int>mp;
    unordered_map<char,int>sp;
    
    vector<int>ans;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    int k=mp.size();
    while(j<n){
    sp[s1[j]]++;
    if(j-i+1==k){
        if(sp==mp){
         cnt++;
        }
        sp[s[i]]--;
        i++;
        sp[s[i]]++;
        j++;
        sp[s[j]]++;
    }
    else if(j-i+1<k){
        j++;
        continue;
    }
    else {
        j++;
        continue;}

    }
    // for(auto i:ans){
    //     cout<<i;
    // }
    cout<<cnt;
}


int main(){
    string s1="abccabdcdabadbc";
    // cin>>s1;
    string s="cab";
    // cin>>s;
    int n=s1.length();
    Occurence(s1,n,s);
}