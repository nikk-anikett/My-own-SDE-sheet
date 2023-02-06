// minimum deletion to make character frequencies unique
#include<bits/stdc++.h>
using namespace std;
class solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        set<int> st;
        int cnt=0;
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;
        for(auto x:mp){
            while(x.second >0 and st.find(x.second)!=st.end()){
                cnt+=1;
                x.second-=1;
            }
            st.insert(x.second);
        }
        return cnt;
    }
};
int main(){
    string s="aaabbbcc";
    solution &obj=*(new solution());
    cout<<obj.minDeletions(s)<<endl;
    return 0;
}