#include<bits/stdc++.h>
using namespace std;
// know 
double multiply(double num,int m){
    double ans=1.0 ;
    for(int i=0;i<m;i++){
        ans=ans*num;
    }
    return ans;
}

int main(){
    int n,m;cin>>n>>m;//4 2->2
     double low=1;
     double high=n;
     double eps=1e-6;
    while((high-low)>eps){
        double mid=(high+low)/2.0;
        if(multiply(mid,m)<n){
           low=mid;
        }
        else high=mid;
        
    }
    cout<<high;
    return 0;
}

// T.C=mlog(d*n);
//S.C=1;