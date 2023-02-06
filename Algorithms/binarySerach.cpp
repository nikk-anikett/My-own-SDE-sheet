#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int key;
        cin>>key;
        vector<int> v;
        v={1,2,3,4,5,6,7,8};
        int n=v.size();
        int low =0,high=n-1;
        while (low < high) 
        {
            int mid=(low+high) / 2;
            if(v[mid]==key){
                cout<<mid<<endl;
                break;
            }
            else if(v[mid]<key)
            low=mid+1;
            else
            high=mid-1;
        }
    }
    return 0;
}