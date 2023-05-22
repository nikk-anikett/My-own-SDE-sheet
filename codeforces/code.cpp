#include<bits/stdc++.h>
#define ll long long int   
#define ld long double
#define vi vector<ll>
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fill(a, b) memset(a, b, sizeof(a))
#define inf 1000000000
#define binf 1e18 + 100
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    rep(i,1,s.length()){
        if(s[i-1]==s[i])
            cnt++;
    }
    cout<<cnt<<endl;
}
int main() {
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}