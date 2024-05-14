#include<bits/stdc++.h>
#define vi vector<int>
#define um unordered_map
#define rep(i,a,b) for(int i = a; i < b; i++)
using namespace std;
um<int, bool> vis;

void dfs(int vertex, um<int, vi> &mp_arr, vi &ans){
    vis[vertex] = true;
    ans.push_back(vertex);
    for(auto child : mp_arr[vertex]){
        if(vis[child] == true)
            continue;
        dfs(child, mp_arr, ans);
    }
}
void print(um<int, vi> &mp_arr){
    for(auto x : mp_arr){
        cout << x.first << " : ";
        for(auto y : x.second){
            cout << y << " ";
        }
        cout << endl;
    }
}
int main(){
    int v, e;
    cin >> v >> e;
    um < int, vi > mp_arr;
    vi ans;
    rep(i,0,e){
        int x, y;
        cin >> x >> y;
        mp_arr[x].push_back(y);
        mp_arr[y].push_back(x);
    }

    print(mp_arr);

    dfs(v, mp_arr, ans);

    rep(i,0,ans.size()){
        cout << ans[i];
        if(i == ans.size()-1){
            break;
        }else{
            cout << "->";
        }
    }

    return 0;
}