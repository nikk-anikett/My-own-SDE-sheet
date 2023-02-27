class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
      set<int> s1,s2;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(s1.find(i)!=s1.end() || s2.find(j)!=s2.end())
                     m[i][j]=0;
            }
        }
    }
}