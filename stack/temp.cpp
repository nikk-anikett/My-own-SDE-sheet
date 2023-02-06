#include<bits/stdc++.h>
using namespace std;
const int a=11;
const int b=10;
int main(){
    vector<int> nums(5);
    nums={2,2,3,3,-1};
        vector<int> v1(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            v1[nums[i]]++;
        }
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" "; 
        }
    return 0;
}