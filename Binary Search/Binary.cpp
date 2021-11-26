#include<bits/stdc++.h>
using namespace std;


int main(){
    
    return 0;
}


//what is binary search ?
/*
it is a searching technique which works in logn time commplexity 
we have to find m=7;
             0 1 2 3 4 5 6 7  8  9
int arr[10]={1,2,3,4,5,7,9,10,11,12}
             l       m            r 
             int l=0;->0
             int r=n-1;->9

             while(l<=r){
                 mid=l+r/2; 9+0/2==4;-->9+5/2 =7 --> 6+5/2==5;
                if(arr[mid]==m){  arr[4]=5; now lets check this so 5 < 7   -->arr[7]=10   10 > 7  -->arr[5]=7   7 == 7
                    return m;
                }
                else if(arr[mid]<m){
                    l=mid+1;
                }
                else if(arr[mid]>m){
                    r=mid-1;
                }
                else {
                    retur -1;
                }

             }
*/
