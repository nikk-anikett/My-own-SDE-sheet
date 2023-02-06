#include<bits/stdc++.h>
using namespace std;
vector<int> sol(vector<int>&v){
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<v.size();i++){
        while (s.size()>0 && s.top() <= v[i]){
            s.pop();
        }
        (s.size()==0) ? ans.push_back(-1) : ans.push_back(s.top());
        s.push(v[i]);
    }
    return ans;
}
int main(){
    int n=7;
    vector<int> v(n),ans;
    v={21,1,3,43,56,78,23};
    ans=sol(v);
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}