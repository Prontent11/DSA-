#include<bits/stdc++.h>
using namespace std;

void
subSet (int ind, vector < int >&ds, vector < int >arr, int n)
{
  if (ind == n)
    {
      cout << "{";
    for (auto it:ds)
	{
	  cout << it << " ";
	}
      cout << "}" << endl;
      return;
    }
  ds.push_back (arr[ind]);
  subSet (ind + 1, ds, arr, n);
  ds.pop_back ();
  subSet (ind + 1, ds, arr, n);
}


int main(){
    vector<int>arr={1,2,3};
    int n=arr.size();
    vector<int>ds;
    int ind=0;
    subSet(ind,ds,arr,n);
    
    return 0;
}