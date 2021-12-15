#include<bits/stdc++.h>
using namespace std;

int element(vector<int>&arr){
    int low=0,high=arr.size()-2;
    int mid;
    while(low<=high){
        mid=(low+high)>>1; //xor with 1 will divide the sum of low and high by 2
        if(arr[mid]==arr[mid^1]){
            low=mid+1;
        }
        //1 1 2 3 3 4 4 5 5 
        //0 1 2 3 4 5 6 7 8
        //l     m       h 
       /* we are pointing our high to the second last index because if the last element is the single element that we are looking for so we will able to return that as answer

        eg. 1,1,2,2,3,3,4
        as in this we will shrink the left half our low will point to the last index and as low is greater than or high it's gonna be our answer
        */
        //left half even 1st instance odd 2nd instance
        // if(mid%2==0 and arr[mid-1]==arr[mid]){
        //     low=mid+1;
        // }
        // else if(mid%2!=0 and arr[mid+1]==arr[mid]){
        //     low=mid+1;
        // }
        
        //right half odd 1st instance even 2nd instance
        // vice versa of the left half
        
        // but to reduce the no. of lines of code we are using xor function
        // xor of even is next odd;
        // xor of odd is previous even;

        //once low will cross high we will return the value of low as the answer
        else{
            high=mid-1;
        }
    }

    return arr[low];
}

int main(){
    vector<int>arr={1,1,2,2,3,4,4,5,5};
    int ans=element(arr);
    cout<<ans;
    return 0;
}