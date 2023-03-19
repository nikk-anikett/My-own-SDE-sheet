#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    arr={1,2,3,4,5,6,7};
    int k=3;
    reverse(begin(arr),end(arr));
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    
    for(auto x:arr){
        cout<<x<<" ";
    }
    
    return 0;
}