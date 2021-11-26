#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivot(vector<int> &arr)
    {
        int l = 0, h = arr.size() - 1;
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid] < arr[mid - 1])
            {
                return mid - 1;
            }
            else if (arr[l] > arr[mid])
            {
                h = mid - 1;
            }
            else if (arr[l] < arr[mid])
            {
                l = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int> &arr, int t)
    {

        int p = pivot(arr);
        if (p == -1)
        {
            int l = 0, h = arr.size() - 1;
            while (l <= h)
            {
                int mid = l + (h - l) / 2;
                if (arr[mid] < t)
                {
                    l = mid + 1;
                }
                else if (arr[mid] > t)
                {
                    h = mid - 1;
                }
                else if (arr[mid] == t)
                {
                    return mid;
                }
                else
                {
                    return -1;
                }
            }
        }
        else{
            int low=0,high=arr.size()-1;
            if(arr[low]>t){
                low=p+1;
                high=arr.size()-1;
            }
            else if(arr[low]<=t){
                low=0;
                high=p;
            }
            else if(arr[p]==t){
                return p;
            }
            while(low<=high){
                int mid = l + (h - l) / 2;
                if (arr[mid] < t)
                {
                    l = mid + 1;
                }
                else if (arr[mid] > t)
                {
                    h = mid - 1;
                }
                else if (arr[mid] == t)
                {
                    return mid;
                }
                else
                {
                    return -1;
                }
            }
        }
    }
};