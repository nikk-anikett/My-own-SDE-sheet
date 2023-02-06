class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
         for(long long i = 0;i<n;i+=k){ 
            if(i+k < n){ 
                reverse(arr.begin()+i, arr.begin()+(i+k));
            }
            else{
                reverse(arr.begin()+i, arr.end());
            }
        }
    }
};