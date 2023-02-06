#include<bits/stdc++.h>
using namespace std;
vector<int> sol(vector<int>&v){
    vector<int> ans;
    stack<int> s;
    for(int i=v.size()-1;i>=0;i--){
        while (s.size()>0 && s.top() >= v[i]){
            s.pop();
        }
        (s.size()==0) ? ans.push_back(-1) : ans.push_back(s.top());
        s.push(v[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n=9;
    vector<int> v(n),ans;
    v={34, 35, 27, 42, 5, 28, 39, 20, 28};
    ans=sol(v);
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}