#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="133235";
    char ch='3';
    string res="";
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            string temp=(str.substr(0,i)+str.substr(i+1,str.length()));
            res=max(res,temp);  
            cout<<res<<endl;
        }
    }
    return 0;
}