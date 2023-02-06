#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr,int k){
    int n=arr.size();
    for(int i=0;i<n;i+=k){
        if(i+k < n){
            reverse(arr.begin()+i,arr.begin()+i+k);
        }else{
            reverse(arr.begin()+i,arr.end());
        }
    }
}
int main(){
    int k;
    cin>>k;
    vector<int>v;
    v={1,2,3,4,5};
    reverse(v.begin(),v.begin()+3);
    sort(v.begin(),v.begin()+k);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
} 