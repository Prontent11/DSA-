#include<bits/stdc++.h>
using namespace std;

vector<int> pairs(vector<int> &arr,int sum){
vector<int>result;
unordered_set<int>s;
int total;
for (int i = 0; i < arr.size(); i++)
{   
    total = sum - arr[i];

    if(s.find(total)!=s.end()){
        result.push_back(total);
        result.push_back(arr[i]);
        return result;
    }
    s.insert(arr[i]);


}
    return {};
}

int main(){
    vector<int>arr={1,2,4,5,6};
    int sum=12;
    auto p= pairs(arr,sum);
    if(p.size()!=0) cout<<p[0]<<" "<<p[1];
    else cout<<"no such pair exists";    
    return 0;
}