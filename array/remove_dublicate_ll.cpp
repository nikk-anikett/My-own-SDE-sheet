class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1,res=nums[0],pos=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i])
            cnt=1,res=nums[i],nums[pos++]=nums[i];
            else if(cnt++ < 2){
                nums[pos++]=nums[i];
            }
        }
        cout<<res<<endl;
        return pos;
    }
};