#include<bits/stdc++.h>
using namespace std;

string sol(){
    int n;
    cin>>n;
    string s,str;
    cin>>s;
    int cnt=0;
    for(int i=0;i<200;i++){
       
        if(i%3==0){
            str+="F";
        }else if(i%5==0){
            str+="B";
        }
        // }else if(i%3==0 && i%5==0){
        //     str+="FB";

    }
    if(str.find(s)!=string :: npos)
        return "yes";
    return "no";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        cout<<sol()<<endl;
    }
    return 0;
}