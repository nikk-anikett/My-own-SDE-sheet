#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, vector<int>> arr)
{
    for(auto x : arr){
        cout << x.first << ":" << " ";
        for(auto y : x.second){
            cout << y << " ";
        }
        cout << endl;
    }
}

int main(){
    int v, e;
    cin >> v >> e;
    unordered_map<int, vector<int>> arr;
    for(int i = 0; i < e; i++){
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    
    print(arr);
    
    return 0;
}

6 9 
1 3
1 5
3 4
3 6
3 5
3 2
2 6 
4 6
5 6