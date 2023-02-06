class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<int,string> m;
        set<string> s;
        for(int i=0;i<strs.size();i++)
            m[i]=strs[i];
        
        for(int j=0;j<strs.size();j++){
                sort(strs[j].begin(),strs[j].end());
                s.insert(strs[j]);
        }     
        for(auto x:m){
            cout<<x.first<<" "<<x.second<<endl;
        }
        vector<vector<string>> ans;
        for(auto x:s){
            vector<string> v;
            for(int i=0;i<strs.size();i++){
                if(x==strs[i])
                v.push_back(m[i]);
            }
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};