#include<bits\stdc++.h>
#define vi vector<int>
#define um unordered_map
using namespace std;

void bfs(int vertex, um<int, vi> mp_arr, vi &vis, vi &ans){
    vis[vertex] = true;
    queue<int> q;
    q.push(vertex);
    while(!q.empty()){
        int fq = q.front();
        q.pop();
        for(auto child : mp_arr[fq]){
            if(vis[child]) continue;
            q.push(child);
            vis[child] = true;
        }
    }
}

int main(){
    int v, e;
    cin >> v >> e;
    um < int, vi > mp_arr;
    vi ans;
    vi vis[e];
    for(int i = 0; i < e; i++){
        int x, y;
        cin >> x >> y;
        mp_arr[x].push_back(y);
        mp_arr[y].push_back(x);
    }
    bfs(v,mp_arr,vis,ans);

    for(int i = 0; i < ans.size(); i++){
        cout << ans << " ";
    }

    return 0;
}