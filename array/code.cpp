#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void tocheck(vector<vector<int>> &board,int row,int col){
        // int i=0,j=0;
        // row=row-row%3;
        // col=col-col%3;
        // while(i<3){
        //     while(j<3){
        //        cout<<board[i+row][j+col]<<" ";
        //        j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }
      
        // row=row-row%3;
        // col=col-col%3;
        set<int> s;
        for(int i=0;i<3;i++){
            
            for(int j=0;j<3;j++){
                cout<<board[i+row][j+col]<<" ";
                if(s.find(board[i+row][j+col]) == s.end())
                    s.insert(board[i+row][j+col]);
                else{
                    cout<<"no";
                    return;
                }
            }
            cout<<endl;
        }
}
int main(){
    // int n;
    // cin>>n;
    vector<vector<int>> board(9,vector<int> (9));
    board={{1,2,2,3,4,5,6,7,8},{1,2,2,3,4,5,6,7,8},{1,2,2,3,4,5,6,7,8}
    ,{1,2,2,3,4,5,6,7,8},{1,2,2,3,4,5,6,7,8},{1,2,2,3,4,5,6,7,8}
    ,{1,2,2,3,4,5,6,7,8},{1,2,2,3,4,5,6,7,8},{1,2,2,3,4,5,6,7,8}};
     for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                // cout<<i<<" "<<j<<endl;
                tocheck(board,i,j);
                cout<<endl;
            }
        }
    return 0;
}