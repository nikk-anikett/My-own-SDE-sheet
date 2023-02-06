#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(9);
    v={1,2,5,4,8,6,3,9,7};
    make_heap(begin(v),end(v));
    for(auto x:v)
    cout<<x<<" ";
    return 0;
}
