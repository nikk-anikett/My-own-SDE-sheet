#include<bits/stdc++.h>
#define vi vector<int>   
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void solve(vi v){
   int min=*min_element(v.begin(),v.end());
   int max=*max_element(v.begin(),v.end());
   cout<<min<<" "<<max<<endl;
   int sum = accumulate(v.begin(),v.end(),0);
   cout<<sum<<endl;
   int ct=count(v.begin(),v.end(),2);
   cout<<ct<<endl;
   auto el= find(v.begin(),v.end(),9);
//    cout<<el<<endl;

    //find function hash map
    if(s.find(i)==s.end()); //in case of unordered_map or set will be O(1)
                            //otherwise O(log n)    
    //find function string
    // string s,str;
    if(s.find(str)!=string ::npos)
    return s.find(str); // return index

    //count digits in number
    int count=floor(log10(n))+1; 



   if(el!=v.end())
    cout<<*el<<endl;
    else
    cout<<"not found";
    // sort it into a descending order
    sort(v.rbegin(),v.rend()); 
    // sort it into a ascending order
    sort(v.begin(),v.end());
    for(auto val: v){
        cout<<val<<" ";
    }   
    cout<<endl;
    // importent
    // for array
    // sort(a,a+n); //O(nlogn)
    reverse(v.begin(),v.end()); //O(n)
    for(auto x:v){
        cout<<x<<" ";
    }            
    }            
    set<int> s;
    // s.insert(value);
    // if(s.find(value)!=v.end());
    // s.erase(value);            
    // s.erase(s.begin(),s.end());         
}
int main(){
    vi v(6);
    v={2,2,5,1,9,6};
       solve(v);
    return 0;
}