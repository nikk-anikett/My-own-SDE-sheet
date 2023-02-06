#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,cnt=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum>1)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
