class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        int cnt=0;
        for(auto x:mp){
            if(k>0 && mp.find(x.first+k)!=mp.end() || k==0 && x.second>1)
            cnt++;
        }
        return cnt++;
    }
};