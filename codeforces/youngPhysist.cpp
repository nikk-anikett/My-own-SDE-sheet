#include<bits/stdc++.h>
using namespace std;
int sol(){
    int temp=0,a=0,b=0;
    vector<vector<int>> v(5,vector<int> (5));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    if(a==0 && b==4 || a==4 && b==0 || a==4 && b==4 || a==0 && b==0)
    return 4;
    else if(a==0 && b==1 || a==1 && b==0 || a==0 && b==3 ||a==3 && b==0 || a==4 && b==1 || a==1 && b==4 ||a==3 && b==4 || a==4 && b==3)
    return 3;
    else if(a==1 && b==2 || a==2 && b==1 || a==2 && b==3 || a==3 && b==2)
    return 1;
    else if(a==2 && b==2)
    return 0;
    else
    return 2;
}
int main(){
    cout<<sol()<<endl;
    return 0;
}
