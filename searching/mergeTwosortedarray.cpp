#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &ans,int k){
        int low=0,high=ans.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid==k-1)
            return ans[mid];
            else if(mid < k)
            low=mid+1;
            else
            high=mid-1;
        }
    return -1;
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    for(int i=0;i<m;i++)
    cin>>arr2[i];
    int i=0,j=0,c=0,ans=0;
       while(i<n && j<m){
           if(arr1[i]<=arr2[j]){
                if(c==k){
                    cout<<ans<<endl;
                    return 0;
                }
                ans=arr1[i];
                i++;c++;
           }
           else if(arr1[i]>arr2[j]){
                if(c==k){
                    cout<<ans<<endl;
                    return 0;
                }
                ans=arr2[j];
                j++;c++;
           }
       }
       while(i<n){
                if(c==k){
                    cout<<ans<<endl;
                    return 0;
                }
           ans=arr1[i];
           i++;c++;
       }
        while(j<m){
            if(c==k){
                cout<<ans<<endl;
                return 0;
            }
            ans=arr2[j];
            j++;c++;
       }
    cout<<ans<<endl;   
    return 0;
}