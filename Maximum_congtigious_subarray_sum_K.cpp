/*Actually this question is maximum contigious sum of three length. using bruteforce.*/
#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
int max_contigious_sum(vector<int> &v){
    int best_sum=INT_MIN;
    for(int i = 0; i <= v.size() - 3;i++) {
        int  temp_sum = 0;
        for(int j=i;j<i+3;j++){
            temp_sum=temp_sum+v[j];
        }

        if(temp_sum > best_sum) 
            best_sum = temp_sum;          
    }
    return best_sum;
}

int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
 int result=max_contigious_sum(v);
 cout<<result;

}