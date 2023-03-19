#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);   
        }
    }
}
int main(){
    vector<int> arr;
    arr={5,2,3,7,8,2,1,4,5};
    bubbleSort(arr,arr.size());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
