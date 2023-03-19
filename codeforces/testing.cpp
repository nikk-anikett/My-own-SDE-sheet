#include<bits/stdc++.h>
#define vi vector<int>   
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ll long long int
using namespace std;
string sol(){
    int n;
    cin>>n;
    vi arr(n);
    int mi=0,bi=0;
    rep(i,0,n){
        cin>>arr[i];
        if(arr[i]%2==0)
            mi+=arr[i];
        else
            bi+=arr[i];
    }       
    return ((mi>bi) ? "YES" : "NO");
}
int main(){
    int t;
    cin>>t;
    while(t--){
       cout<<sol()<<endl;
    }
    return 0;
}