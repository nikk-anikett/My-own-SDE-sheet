#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	vector<int> v(t);
    int maxn=INT_MIN;
    vector<int> ans;
    ans.push_back(0);
    for(int i=0;i<t;i++){
        cin>>v[i];
        ans.push_back(v[i]);
    }
    for (int i = 1; i < ans.size(); i++){
        maxn=max(maxn,ans[i-1]);
        ans[i]=maxn;
    }
    for(int i=0;i<t;i++){
        v[i]=v[i]-ans[i];
        cout<<v[i]<<" ";
    }
	return 0;
}
