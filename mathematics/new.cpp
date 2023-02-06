 #include<bits/stdc++.h>
 using namespace std;
 vector<int> si(int N){
        vector<int> ans,v1(N+1,1);
        for(int i=2;i*i<=N;i++){
            for(int j=2*i;j<=N;j+=i){
                v1[j]=0;
            }
        }
        for(int i=2;i<N+1;i++){
            if(v1[i]==1){
            ans.push_back(i);
            }
        }
        return ans;
    }
    int main(){
        int n;
        cin>>n;
        vector<int> v(si(n));
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" "; 
        }
        return 0;
    }   