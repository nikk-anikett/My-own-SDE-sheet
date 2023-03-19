#include<bits/stdc++.h>
#define ll long long int   
#define vi vector<ll>
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void sol(){
    ll n,q,sum=0;
    cin>>n>>q;
    vi arr(n),temp(n,0);
    rep(i,0,n){
       cin>>arr[i];
       sum+=arr[i];
    }
    temp[0]=arr[0];
    rep(i,1,n){
        temp[i]=arr[i]+temp[i-1];
    }
    while(q--){
        ll l,r,k,ans=0;
        cin>>l>>r>>k;
        for(ll i=l-1;i<=r-1;i++)
            arr[i]=k;
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
            ans+=arr[i];
        }
            
        cout<<ans<<endl;
        cout<<((ans%2==0) ? "NO" : "YES")<<endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
       sol();
    }
    return 0;
}