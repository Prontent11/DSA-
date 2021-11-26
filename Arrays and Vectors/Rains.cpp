#include<bits/stdc++.h>
using namespace std;

int trappedwater(vector<int>&height){
    int n=height.size();
    if(n<=2) return 0;
    vector<int>right(n,0);
    vector<int>left(n,0);

    
    left[0]=height[0];
    right[n-1]=height[n-1];
    for (int i = 1; i < n; i++)
    {
        left[i]=max(left[i-1],height[i]);
        right[n-i-1]=max(right[n-i],height[n-i-1]);

        
    }
    int trapwater=0;
    for (int i = 0; i < n; i++)
    {   int t=min(right[i],left[i]);
        trapwater+=t-height[i];
    }
    return trapwater;
}

int main(){
    vector<int>arr={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappedwater(arr);

    return 0;
}