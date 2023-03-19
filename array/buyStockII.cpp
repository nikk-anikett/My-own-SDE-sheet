class Solution {
public:
    int maxProfit(vector<int>& p) {
        vector<int> arr;
        int temp=p[0];
        for(int i=0;i<p.size()-1;i++){
            if(temp<p[i+1]){
                arr.emplace_back(p[i+1]-temp);
                temp=p[i+1];
            }else
                temp=p[i+1];
        }
        int sum=accumulate(begin(arr),end(arr),0);
        return sum;
    }
};