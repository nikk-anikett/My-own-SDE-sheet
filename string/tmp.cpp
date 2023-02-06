#include<bits/stdc++.h>
using namespace std;
bool powofthree(int n){
    if(n==0) return false;
    while(n%3==0)
        n /= 3;                 
    return n==1;
}
bool powoftwo(int n){
    if(n==0) return false;
    while(n%2==0)
        n/=2;
    return n==1;
}
int main(){
    int n;
    cin>>n;
    if(n%2==0)
        cout<<powoftwo(n)<<endl;
    else
        cout<<powofthree(n)<<endl;
    return 0;
}