#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=500;
    for(int i=1;i<n;i++)
    {
        int sum=0,temp=i,cnt=0;
        while (temp>0){
            cnt++;
            temp/=10;
        }
        temp=i;
        while (temp>0){
            int rem=temp%10;
            int p=pow(rem,cnt);
            sum+=p;
            temp/=10;
        }
        if(i==sum)
        cout<<sum<<" ";        
    }
    return 0;
}