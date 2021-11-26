#include<bits/stdc++.h>
using namespace std;

int mountain(vector<int>&arr){
    int n=arr.size();
    int mx=0;
    for (int i = 1; i <= n-2;)
    {
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
              int cnt(1);
            int j=i;
            while(j>=1 and arr[j]>arr[j-1]){
                j--;
                cnt++;
            }
            while(i<=n-2 and arr[i]>arr[i+1]){
                i++;
                cnt++;
            }
        mx=max(mx,cnt);

        }
        else {
            i++;
        }
    }
    return mx;
    
}

int main(){
    vector<int>arr={1,2,3,4,3,2,1,3,4,5,6,7,8,9,10,8,7,6,5,4};
    int peak=mountain(arr);
    cout<<peak;
    return 0;
}