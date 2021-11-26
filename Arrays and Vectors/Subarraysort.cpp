#include<bits/stdc++.h>
using namespace std; 
//(nlogn approach)
//space complexity of O(n)

vector<int> Subarraysort(vector<int>&arr){
vector<int>result;
int n=arr.size();
vector<int>arr1(n);

for(int i=0;i<n;i++){  
arr1[i]=arr[i];
}
sort(arr1.begin(),arr1.end());

int i=0;
int k=n-1;

    while(i<n and arr[i]==arr1[i]){
        i++;
        

    }
    while (k>=0 and arr[k]==arr1[k])
    {
        k--;
       
    }
    if(i==n){
        return {};
    }
    result.push_back(i);
    result.push_back(k);
    return result;

}
 //n approach 
bool out_of_order(vector<int>arr,int i){
    int x =arr[i];
    int n=arr.size();
    if(i==0) return  x>arr[1];
    else if(i==arr.size()-1) return arr[i-1]>x;
    return x>arr[i+1] or x<arr[i-1];
    
}
vector<int>Subarraysort(vector<int>&arr){
    int n=arr.size();
    vector<int>result;
    int largest=INT_MIN,smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(out_of_order(arr,i)){
            smallest=min(smallest,arr[i]);
            largest=min(largest,arr[i]);
        }
    }

    if(smallest==INT_MAX) return {};
    int left=0;
    while(smallest>=arr[left]){
        left++;
    }
    int right=n-1;
    while(largest<=arr[right]){
        right--;
    }
    
     result.push_back(left);
     result.push_back(right);

     return result;
}

int main(){
    vector<int>arr={1,2,4,3,5,8,7,6,11,10,9};
   
   
    auto p=Subarraysort(arr);

    if(p.size()==0) cout<<"Array is already sorted";
    else{

    cout<<p[0]<<"  "<<p[1];
    }
    return 0;
}