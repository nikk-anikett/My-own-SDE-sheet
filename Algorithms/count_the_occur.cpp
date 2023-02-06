#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int binarySearch(vector<int> &v,int target){
        int low=0,high=v.size()-1;
        while (low<=high)
        {
            int mid=low+(high-low)/2;
            if(v[mid]==target)
            return mid;
            else if(v[mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        return -1;
    }
    int searchCount(vector<int> &v,int target){
        int midindex=binarySearch(v,target);
        if(midindex == -1 || v.size()==0)
        return -1;

        int l=midindex;
        int r=midindex;

        int cnt=1;

        while (l>0 && v[l-1]==target)
        {
            cnt++;l--;
        }
        while (r<v.size()-1 && v[r+1]==target)
        {
            cnt++;r++;
        }        
        return cnt;
    }
};
int main(){
    int target;
    cin>>target;
    vector<int> v;
    v={1,2,2,3,3,8,8,8};
    
    solution &obj=*(new solution());
    int ans=obj.searchCount(v,target);
    cout<<ans<<endl;
    return 0;
}