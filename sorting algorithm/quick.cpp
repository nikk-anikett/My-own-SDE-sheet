#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int s,int e){
    int pivot=arr[s],cnt=0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot)
            cnt++;
    }
    int pIndex=s+cnt;
    swap(arr[s],arr[pIndex]);
    int i=s,j=e;
    while (i<pIndex and j>pIndex) 
    {
        while(arr[i]<=arr[pIndex])
            i++;
        while (arr[j]>arr[pIndex])
            j--;
        if (i<pIndex and j>pIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pIndex;
}
void quickSort(vector<int> &arr,int s,int e){
    if(s>=e)
        return;
    int pivot=partition(arr,s,e);
    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot+1,e);
}
int main(){
    vector<int>arr;
    arr={5,2,3,7,8,2,1,4,5};
    quickSort(arr,0,8);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}