#include<bits/stdc++.h>
using namespace std;
void sol(int n, int m){
    int a[n][m]={{1,0,0,1},{0,1,1,0},{0,1,1,0},{1,0,0,1}};
    // int a[n][m]={{1,1},{1,1}};
    vector<int> v;
    int mh=0,c=0;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                c++;
                mh++;
            }else{
                if(c>1)
                sum+=c;
                c=0;
            }
        }
    }
    cout<<mh<<" "<<sum<<endl;
}
int main(){
    int n=4,m=4;
    sol(n,m);
    return 0;
}