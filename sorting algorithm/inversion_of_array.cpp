#include <bits/stdc++.h>
#define ll long long int

ll merge(ll *arr,ll s,ll mid,ll e){
    long long int cnt=0;
    int n1=mid-s+1;
    int n2=e-mid;
    vector<int> a(n1),b(n2);
    ll k=s;
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
            cnt+=(n1-i);
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
    }
    return cnt;
}
ll mergeSort(ll *arr,ll s,ll e){
    ll cnt=0;
    if(s<e){
    int mid=s+(e-s)/2;
    cnt+=mergeSort(arr,s,mid);
    cnt+=mergeSort(arr,mid+1,e);
    cnt+=merge(arr,s,mid,e);
    }
    return cnt;
}
long long getInversions(long long *arr, int n){
       ll cnt=mergeSort(arr,0,n-1);
       return cnt;
}