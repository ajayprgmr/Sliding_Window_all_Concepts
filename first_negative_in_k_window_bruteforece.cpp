/* First negative in k size window ,our job to slide the window find first -ve for all window of k lenth*/
#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
void FIRST_NEGATIVE_IN_K_SIZE_WINDOW(vector<int> &v ,int k){
   int outerloop=v.size()-k;
    for(int i=0;i<=outerloop;i++){
         bool found=false;
          int n=i+k;
        for(int j=i;j<n;j++){
            if(v[j]<0){
            cout<<v[j]<<" ";
            found=true;
            break;
            }
        }

        if(!found)
        cout<<"0 ";
    }

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
 FIRST_NEGATIVE_IN_K_SIZE_WINDOW(arr,k);

   
}