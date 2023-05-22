#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root){
    cout<<"Enter root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1)
    return NULL;
    cout<<"enter left of : "<<data<<endl;
    root->left=insert(root->left);
    cout<<"enter right of : "<<data<<endl;
    root->right=insert(root->right);
    return root;
}
void display(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
void bfs(node* root){
    if(root==NULL)
        return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> temp;
        for(int i=0;i<size;i++){
            node* nfront=q.front();
            q.pop();
            temp.push_back(nfront->data);
            if(nfront->left)
                q.push(nfront->left);
            if(nfront->right)
                q.push(nfront->right);
        }
        for(auto x:temp){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
vector<int> verticalOrder(node *root)
    {
        map<int,vector<int>> mp;
        queue<pair<node*,int>> q;
        vector<int> ans;
        if(!root)
        return ans;
        
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair<node*,int> p = q.front();
            q.pop();
            
            node *curr = p.first;
            int hd = p.second;
            
            mp[hd].push_back(curr->data);
            
            if(curr->left)
            q.push(make_pair(curr->left,hd-1));
            if(curr->right)
            q.push(make_pair(curr->right,hd+1));
        }
         for(auto it: mp)
        {
            for(auto i : it.second)
            {
                ans.push_back(i);
            }
        }
        return ans;
}
int main(){
    node* root=NULL;
    root=insert(root);
    vector<int> ans=verticalOrder(root);
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    bfs(root);
    return 0;
}
// 1,2,3,4,6,5,7
// [1,2,3,4,6,5,7]
// 4 3 1 -1 -1 6 -1 -1 5 8 -1 -1 9 -1 -1 
//input 4 3 1 -1 -1 6 -1 -1 5 8 -1 -1 9 -1 -1 
//output    4
        //  3 5 
        //  1 6 8 9