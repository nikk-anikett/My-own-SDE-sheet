#include<bits/stdc++.h>
using namespace std;
string sol(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=1;i<n;i++){
        if(abs(v[i-1]-v[i]) <= 1)
            cnt++;
    }
    return (n-cnt == 1) ? "yes" : "no";
}
int main(){
    int t;
    cin>>t;
    while(t--)
    cout<<sol()<<endl;
    return 0;
}