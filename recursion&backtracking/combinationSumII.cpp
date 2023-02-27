#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> vec;
    void Solve(vector<int>& c, int t, int sum, vector<vector<int>>& op, vector<int>& ans, int i){
        if(t == sum){
            op.push_back(ans);
            return;
        }
        if(c.size() == i)
            return;
        if(sum > t)
            return;
        ans.push_back(c[i]);
        Solve(c, t, sum + c[i], op, ans, i + 1);
        ans.pop_back();
        while(i < c.size()-1 && c[i] == c[i + 1])
            i++;
        Solve(c, t, sum, op, ans, i + 1);
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<vector<int>> op;
        vector<int> ans;
        sort(c.begin(), c.end());
        Solve(c, t, 0, op, ans, 0);
        return op;
    }
};
int main(){
    Solution &obj=*(new Solution);
    vector<int> arr(7),ans;
    arr={10,1,2,7,6,1,5};
    vector<vector<int>> res = obj.combinationSum2(arr,8);
    for(auto x:res){
        for(auto x1:x)
            cout<<x1<<" ";
        cout<<endl;
    }
    return 0;
}
