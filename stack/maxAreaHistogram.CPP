#include<bits/stdc++.h>
using namespace std;
int sol(vector<int>&v){
    vector<int> left,right;
    stack<pair<int,int>> s;
    for(int i=0;i<v.size();i++){
        while (s.size()>0 && s.top().first >= v[i]){
            s.pop();
        }
        (s.size()==0) ? left.push_back(-1) : left.push_back(s.top().second);
        s.push({v[i],i});
    }
    while (s.size()>0){
        s.pop();
    }
    for(int i=v.size()-1;i>=0;i--){
        while (s.size()>0 && s.top().first >= v[i]){
            s.pop();
        }
        (s.size()==0) ? right.push_back(v.size()) : right.push_back(s.top().second);
        s.push({v[i],i});
    }
    reverse(right.begin(),right.end());
    int area=INT_MIN;
    for(int i=0;i<v.size();i++){
        area=max(area , (right[i]-left[i]-1)*v[i]);
    }
    return area;
}
int main(){
    int n=7;
    vector<int> v(n),ans;
    v={2,1,3,4,5,7,3}; 
    cout<<sol(v)<<endl;
    return 0;
}