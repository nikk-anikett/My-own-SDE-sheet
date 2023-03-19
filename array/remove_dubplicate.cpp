class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1,j=0,cnt=0;
        while(i<nums.size()){
            if(nums[j]==nums[i])
                i++;
            else{
                nums[++j]=nums[i];
                cnt++;
            }
        }
        return cnt+1;
    }
};