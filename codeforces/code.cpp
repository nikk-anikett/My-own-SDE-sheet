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
	int x, k;
	cin >> x >> k;
	if (x % k != 0) {
        cout << 1 << endl;
    	cout << x << endl;
    }else{
        cout << 2 << endl;
        cout << 1 << " " << x - 1 << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}