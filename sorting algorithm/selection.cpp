#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    vector<int> arr;
    arr={5,2,3,7,8,2,1,4,5};
    selectionSort(arr,arr.size());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
