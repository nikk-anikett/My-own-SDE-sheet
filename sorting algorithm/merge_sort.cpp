#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int cnt=1;
void merge(vector<int> &arr,int s,int mid,int e){
    int n1=mid-s+1;
    int n2=e-mid;
    vector<int> a(n1),b(n2);
    int k=s;
    for(int i=0;i<n1;i++){
        a[i]=arr[k++];
    }
    k=mid+1;
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[k++];
    }
    int i=0,j=0;
    k=s;
    while (i<n1 && j<n2)
    {   
        if(a[i]<=b[j]){
            arr[k++]=a[i];
            i++;
        }else{
            arr[k++]=b[j];
            j++;
            cnt++;
        }
    }
    while (i<n1)
    {
        arr[k++]=a[i];
        i++;
    }
    while (j<n2)
    {
        arr[k++]=b[j];
        j++;   
        cnt++;
    }
}

void mergeSort(vector<int> &arr,int s,int e){
    if(s<e){
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
    }
}

 int main(){
    int n=3;
    vector<int> v,ans;
    v={3,2,1};
    mergeSort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<cnt<<endl;
    return 0;
 }