#include <bits/stdc++.h>
#include <stdlib.h>
// #ifdef Flying Dutchman
using namespace std;
long long mod = 1e9 + 7;
long long INF = 1e7;
double EPS = 1e-12;
typedef long long int ll;
#define rep(i,a,n) for(int i = a; i < n; i++)
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
#define lim 2000010
#define lim2 200010
#define qqqqqq 210
string S[lim];
ll A[lim];

void codeforces(){
    int n; cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    rep(i,0,n) {
        int x; cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << ((mn < 0) ? mn : mx) << endl;
}

int main(){
    int t = scd();
    while(t--) 
        codeforces();
    return 0;
}