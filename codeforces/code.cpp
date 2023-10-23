/*----------Flying Dutchman----------*/
#include <bits/stdc++.h>
#include <stdlib.h>
#define vi vector<int>
#define rep(i,a,b) for(int i = a; i <= b; i++)
#define ll long long int
using namespace std;
long long mod = 1e9 + 7;
long long INF = 1e7;
double EPS = 1e-12;

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

void solve(){
    int n;
    cin>>n;
    vi arr(n);
    map<int,int> mp;
    rep(i,0,n){  
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.size() == 1){
        cout<<"-1"<<endl;
    }
    else{
        for(auto x:mp)
    }
}
 
int main(){
    int t = scd();
    while(t--) 
        solve();
    return 0;
}