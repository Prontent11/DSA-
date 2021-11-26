#include<bits/stdc++.h>
using namespace std;
int minimumswap(vector<int>&arr){
    int n=arr.size();
    pair<int,int>ap[n];
    for(int i=0;i<n;i++){
        ap[i].first=arr[i];
        ap[i].second=i;
    }
    sort(ap,ap+n);
    int ans=0;
    vector<bool>visited(n,false);
    for (int i = 0; i <n; i++)
    {
        if(visited[i]==true or ap[i].second==i) continue;
     int node=i;
    int cycle=0;
        while(visited[node]==false){
            visited[node]=true;
              int next_node=ap[node].second;
            node=next_node;
            cycle+=1;
        }
        if (cycle > 0)
        {
            ans += (cycle - 1);
        }
    }
    
    return ans;
}
 
int main(){
    vector<int>arr={3 ,2 ,5 ,1 ,7};
    int ans=minimumswap(arr);
    
 
    cout<<ans;
    return 0;
}