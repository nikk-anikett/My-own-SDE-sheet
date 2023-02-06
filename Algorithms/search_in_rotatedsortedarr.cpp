#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int search(vector<int> &nums,int target){
       int low=0,high=nums.size()-1;
        while (low <= high) { 
            int mid = (low + high) >> 1; 
            if (nums[mid] == target)
            return mid; 

            if (nums[low] <= nums[mid]) { 
                if (nums[low] <= target && nums[mid] >= target)
                    high = mid - 1; 
                else
                    low = mid + 1; 
            } else {
                if (nums[mid] <= target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};
int main(){
    int k;
    cin>>k;
    vector<int> v;
    v={1,0,1,1,1};
    solution &obj=*(new solution);
    cout<<obj.search(v,k)<<endl;
    return 0;
}