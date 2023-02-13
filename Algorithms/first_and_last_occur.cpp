#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binarysearch(vector<int>& nums,int target){
        int low=0,high=nums.size()-1,res=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
               return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }else
                high=mid-1;
        } 
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int midindex=binarysearch(nums,target);
        if(midindex==-1 || nums.size()==0)
            return {-1,-1};
        int l=midindex;
        int r=midindex;
        while(l>0 && nums[l-1]==target)
        l--;
        while(r<nums.size()-1 && nums[r+1]==target)
        r++;
        return {l,r};
    }
};
int main(){
    Solution *obj =new Solution();
    int k;
    cin>>k;
    vector<int> v,ans;
    v={5,7,7,8,8,10};
    ans= obj.searchRange(v,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}