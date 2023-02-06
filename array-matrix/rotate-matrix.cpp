#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec(6);
    vec={1,2,3,4,5,6};
    int key=4;
    vector<int> ::iterator it;
    it=find (vec.begin(), vec.end(), key);
    if(it!=vec.end())
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    return 0;
}