class Solution {
public:
    int trap(int A[], int n) {
        int left=0; int right=n-1;
        int res=0;
        int maxleft=0, maxright=0;
        while(left<=right){
            if(A[left]<=A[right]){
                if(A[left]>=maxleft) maxleft=A[left];
                else res+=maxleft-A[left];
                left++;
            }
            else{
                if(A[right]>=maxright) maxright= A[right];
                else res+=maxright-A[right];
                right--;
            }
        }
        return res;
    }
};

class Solution {
public:
    int trap(vector<int>& h) {
        int maxn1=0,maxn2=0;
        int j=h.size()-1;
        vector<int> v1(h.size()),v2(h.size());
        for(int i=0;i<h.size();i++){
            maxn1=max(maxn1,h[i]);
            v1[i]=maxn1;
            maxn2=max(maxn2,h[j]);
            v2[j]=maxn2;
            j--;
        }
        int sum=0;
        for(int i=0;i<h.size();i++){
            sum+=min(v1[i],v2[i])-h[i];
        }
        return sum;
    }
};