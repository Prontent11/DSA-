#include<vector>
#include<algorithm>
#include<climits>
#include<iostream>

using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b){
int n=a.size();
 pair<int,int>result;
 sort(a.begin(),a.end());   
 sort(b.begin(),b.end());  
int ans=0,mn=INT_MAX;
int l=0,r=0;
int i=0,j=0;
while(i!=n and j!=n){
    ans=abs(a[i]-b[j]);
    if(ans<mn){
        mn=ans;
        l=i;
        r=j;
    }
   if(a[i]<b[j]){
       i++;
   }
   else j++;
    
}
result.first=a[l];
result.second=b[r];

return result;


}

int main(){
    vector<int>arr1={23,5,10,17,30};
    vector<int>arr2={26,134,135,14,19};
    auto p=minDifference(arr1,arr2);
    cout<<p.first<<" "<<p.second;
    return 0;
}