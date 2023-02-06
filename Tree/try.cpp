#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k; cin>>n>>k; long long a[n],i;
   // stack<int> s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //s.push(a[i]);
    }
    if((n==1) && (k%2==1)) cout<<"-1";
    else if(k==n) cout<<*max_element(a,a+n-1);
    else if(k<n)
    {
    long long m=*max_element(a,a+k-1);
    if(m>a[k])  cout<<m;
    else cout<<a[k];
    }
    else
    {
        cout<<*max_element(a,a+n);
    }
}