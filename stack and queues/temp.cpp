#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int maxn=0,pre=0;
    for(int i=0;i<n;i++){
        int ct=count(v[i].begin(),v[i].end(),1);
        maxn=max(maxn,ct);
    }
    for(int i=0;i<n;i++){
        int ct=count(v[i].begin(),v[i].end(),1);
        if(maxn==ct){
            pre=i;
            break;
        }
    }
    cout<<pre<<" "<<maxn<<endl;
    return 0;
}