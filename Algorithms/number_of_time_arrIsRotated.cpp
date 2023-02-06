#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int binarySearch(vector<int> &nums){
       int low=0,high=nums.size()-1;
        int res=nums[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<nums[high]){
                res=min(res,nums[low]);
                break;
            }
            res=min(res,nums[mid]);
            if(nums[low]<=nums[mid])
                low=mid+1;
            else 
                high=mid-1;
        }
        return res;
    }
};
int main(){
    vector<int> v;
    v={4,5,6,7,0,1,2};
    
    solution &obj=*(new solution());
    int ans=obj.binarySearch(v);
    cout<<ans<<endl;
    return 0;
}