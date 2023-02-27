#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
   void solve(vector<int>arr,int op,int i,vector<int>&ans){
        if(i == arr.size()){
            ans.push_back(op);
            return;
        }
        solve(arr,op+arr[i],i+1,ans);
        solve(arr,op,i+1,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        solve(arr,0,0,ans);
        return ans;
    }
};
int main(){
    Solution &obj=*(new Solution);
    vector<int> arr(7),ans;
    arr={10,1,2,7,6,1,5};
    vector<int> res = obj.subsetSums(arr,7);
    for(auto x:res){
        cout<<x<<endl;
    }
    return 0;
}