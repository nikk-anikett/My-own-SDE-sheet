#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> str(26,0),ans,pi(26,0);
        if(s.length()<p.length())
            return {};
        for(int i=0;i<p.length();i++){
            str[s[i]-'a']++;
            pi[p[i]-'a']++;
        }
        if(str==pi)
            ans.push_back(0);
        int n=p.length(); 
        for(int i=n;i<s.length();i++){
           str[s[i-n]-'a']--;
           str[s[i]-'a']++;
           if(str==pi)
           ans.push_back(i-n+1);
        }   
        return ans;
    }
};
int main(){
    string s="baa",p="aa";
    vector<int> ans;

    Solution obj;
    ans=obj.findAnagrams(s,p);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}