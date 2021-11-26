#include<bits/stdc++.h>
using namespace std;

vector<int> triplets(vector<int> &arr,int sum){
vector<int>result;
unordered_set<int>s;
int total;
int size=arr.size();
for (int i = 0; i < size-3; i++)
{   
    total = sum - arr[i];

    int high=size-1;
    int low=0;
    while(low<=high){
        int tot=arr[high]+arr[low];
        if(tot<total) low++;
        else if(tot>total) high++;
        else if(tot==total){
            result.push_back(arr[i]);
            result.push_back(arr[low]);
            result.push_back(arr[high]);
            return result;

        }


    }
        return {};

}
    return {};
}

int main(){
    vector<int>arr={1,2,4,5,6};
    int sum=10;
    auto p= triplets(arr,sum);
    
    if(p.size()!=0) cout<<p[0]<<" "<<p[1]<<" "<<p[2];
    else cout<<"no such pair exists";    
    return 0;
}