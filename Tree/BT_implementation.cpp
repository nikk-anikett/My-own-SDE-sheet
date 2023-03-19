#include<bits/stdc++.h>
#include<stdlib.h>
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
node* insert(node *root){
    cout<<"enter root: "<<endl;
    int data;
    cin>>data;
    root =new node(data);
    if(data==-1)
    return NULL;
    cout<<"enter left of: "<<data<<endl;
    root->left=insert(root->left);
    cout<<"enter right of: "<<data<<endl;
    root->right=insert(root->right);
    return root;
}
void normaldisplay(node* root){
    queue<node*>q;
    q.push(root);
    while (!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}
void display(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
int main(){
    node* root=NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = insert(root);
    display(root);
    return 0;
}