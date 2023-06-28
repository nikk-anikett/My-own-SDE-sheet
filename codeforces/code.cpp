/*----------Flying Dutchman----------*/
#include <bits/stdc++.h>
#include <stdlib.h>
#define vi vector<int>
#define rep(i,a,b) for(int i = a; i < b; i++)
// #define ll long long int
using namespace std;
long long mod = 1e9 + 7;
long long INF = 1e7;
double EPS = 1e-12;
typedef long long int ll;

inline ll sc() { ll a; scanf("%lld", &a); return a; }
inline int scd() { int a; scanf("%d", &a); return a; }
#define all(c) (c).begin(), (c).end()
#define sz(a) ((int)a.size())
 
#define popcount __builtin_popcountll
 
typedef pair<ll,ll> PA;
bool bitSet(ll n, ll bit){
    if((n & (1LL << bit)) != 0) return true;
    else return false;
}

vector<vector<int>> g;
vector<ll> cnt;
 
void dfs(int v, int p) {
    if (g[v].size() == 1 && g[v][0] == p) {
        cnt[v] = 1;
    } else {
        for (auto u : g[v]) {
            if (u != p) {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}
 
void solve() {
    int n, q;
    cin >> n;
 
    g.assign(n, vector<int>());
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
 
    cnt.assign(n, 0);
    dfs(0, -1);
 
    cin >> q;
    for (int i = 0; i < q; i++) {
        int c, k;
        cin >> c >> k;
        c--; k--;
 
        ll res = cnt[c] * cnt[k];
        cout << res << '\n';
    }
}
 
int main(){
    int t = scd();
    while(t--) 
        solve();
    return 0;
}