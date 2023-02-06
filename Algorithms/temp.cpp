#include<bits/stdc++.h>
using namespace std;
int sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='L' && s[i+1]=='R'){
            c1++;
            c2=i+1;         
        }
        if(s[i]=='R' && s[i+1]=='L')
            c3++;
    }
    if(c3>0)
    return 0;
    else{
        if(c1>0)
        return c2;
        else
        return -1;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    cout<<sol()<<endl;
    return 0;
}