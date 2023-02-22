/*Actually this question is maximum contigious sum of three length window. using bruteforce.*/
#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int MCSS_K(vector<int> &v, int k) {
   int ts=0,bs;
   for(int i=0;i<k;i++)
   ts=ts+v[i];
   bs=ts;
   int i=0,temp_i=0,j=k-1,end=v.size()-1;
   while(j<end){
    j++;
    temp_i=i;
    i++;
    ts=ts+v[j]-v[temp_i];
    bs=max(bs,ts);
   }
return bs;

}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int result=MCSS_K(arr,k);
    cout<<result;
    
}