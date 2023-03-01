#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll sol(ll n){
    ll temp=n;
    ll sum = 0;
    while (n>0){
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    ll ans=__gcd(temp,sum);
    if(ans>1)
        return temp;
    sol(ans);
}



int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        cout<<sol(n)<<endl;
    }
    return 0;
}