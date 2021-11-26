#include<bits/stdc++.h>
using namespace std;
void uniquestring(string s){
    int n=s.length();
    string result;
    int loc1=0,loc2=0;
  int  cnt=1; int mx=0;
    char mp[10000];
    int i=0;
    for(int i=0;i<n;i++){
        if(mp[s[i]]==0){
            loc1=i;
            while(mp[s[i]]!=0){
                i++;
                cnt++;
            }
            if(cnt>mx){
                loc2=loc1;
                mx=cnt;
            }
        }
        // else if(mp[s[i]]>0){
        //     mp[s[i]]--;
        // }
    }

    for(int i=loc2;i<loc2+cnt;i++){
        cout<<s[i];
    }
}


int main(){
   string s;
   cin>>s;
   uniquestring(s);
}