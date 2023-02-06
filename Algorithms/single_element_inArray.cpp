class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {

        int n1=n.size();
        int low=0,high=n.size()-1,prev=0,next=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            next = (mid + 1) % n1;
            prev = (mid + n1 - 1) % n1;
            if(n[mid]!=n[prev] && n[mid]!=n[next])
                return n[mid];
            else if(mid%2==0 && n[mid]==n[prev] || mid%2!=0 && n[mid]==n[next])
                high=mid-1;
            else
                low=mid+1;
        }
        return 1;
    }
};