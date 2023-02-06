#include<bits/stdc++.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float ans=0;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2!=0){
            ans=nums1[(n+1)/2 - 1];
        }
        else{
            float temp=n/2.0;
            ans=(nums1[temp-1] + nums1[temp])/2.0;
            cout<<nums1[temp-1]<<" "<<nums1[temp]<<endl;
        }
        return ans;
    }
};