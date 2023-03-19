class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        reverse(begin(digits),end(digits));
        int carry=1;
        int i=0;
        while(carry>0 && i<n){
            int temp=digits[i]+1;
            digits[i]=temp%10;
            carry=temp/10;
            i++;
        }
        if(carry>0){
            digits.push_back(1);
        }
        reverse(begin(digits),end(digits));
        return digits;
    }
};