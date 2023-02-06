#include<bits/stdc++.h>
using namespace std;
int t;
void sol(){
    int n;
    cin>>n;
    int arr[n][n-1];
    int k1=0,k2=0;
    int minn=INT_MAX;
    vector<int> ans;
    set<int> s,s2;
    for (int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>arr[i][j];
            if(j==n-2)
            minn=min(minn,arr[i][n-2]);
            s.insert(arr[i][j]);
        }
    }
    cout<<minn<<endl;
    for (int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
           if(minn==arr[i][n-2]){
            k1=i;
            k2=n-2;
           }
        }
    }
    for(int j=0;j<n-1;j++){
        ans.push_back(arr[k1][j]);
        s2.insert(arr[k1][j]);
    }
    for (auto x:s){
        if(s2.find(x)==s2.end())
        ans.push_back(x);
    }
    for(auto x:ans)
    cout<<x<<" ";
    cout<<endl;
}

int main(){
    cin>>t;
    while (t--){
        sol();
    }
    return 0;
}

4 2 1 3 
1 2 3 
4 2 1 3 5 
1 2 3 4 
2 1 3 
