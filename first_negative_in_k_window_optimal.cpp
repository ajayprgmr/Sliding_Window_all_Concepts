/* First negative in k size window ,our job to slide the window find first -ve for all window of k lenth*/

#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
vector<int> firstNegativeInKSizeWindow(vector<int>& v, int k) {
    queue<int> q;
    vector<int> ans;
    int i = 0, j = 0, n = v.size();
    while (j < n) {
        if (v[j] < 0) q.push(v[j]);
        if (j - i + 1 == k) {
            if (q.empty()) ans.push_back(0);
            else {
                ans.push_back(q.front());
                 if (v[i] == q.front()) q.pop();
            }
            i++;
        }
        j++;
    }
    return ans;
}
int main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(auto i:arr)
    // cout<<i<<" ";
   vector<int>result=firstNegativeInKSizeWindow(arr,k);
   for(auto i:result)
   cout<<i<<" ";
}