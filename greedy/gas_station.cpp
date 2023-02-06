class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0,total2=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i];
            total2+=cost[i];
        }
        if(total<total2)
            return -1;
        int cnt=0,temp=0; 
        for(int i=0;i<gas.size();i++){
            temp+=gas[i]-cost[i];
            if(temp<0){
                cnt=i+1;
                temp=0;
            }
        }
        return cnt;
    }
};