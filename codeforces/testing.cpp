#include <bits/stdc++.h>
using namespace std;
int sol(){
    int n;
    cin>>n;
    vector<int> v(n);
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        (v[i]==1) ? c1++ : c2++;
    }
    if(c1==n)
    return 1;
    else if(c2%2!=0)
        return -1;
    else{
        int c=0;
        for(int i=0;i<n;i++){
            if(c==n/2)
                return i+1;
            if(v[i]==2)
                c++;
        }
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    cout<<sol()<<endl;
	}
	return 0;
}
