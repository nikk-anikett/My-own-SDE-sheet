#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> mp; 
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int cnt=0;
        for(auto x:mp){
            if(x.first == 1){
                cnt+=(x.second%2==0) ? x.second/2 : x.second/2 + 1;
            }else
                cnt+=x.second;
        }
        cout<<cnt<<endl;
    }
    return 0;
}