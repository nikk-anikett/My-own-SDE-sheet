#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left,*right;
    TreeNode(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

void preorder(TreeNode *root){
    if(root == NULL){
        return;
    } 
    cout<<root->data<<" ";  
    preorder(root->left);
    preorder(root->right);
}
void preorderL(TreeNode* root){
    if(root==NULL)
        return;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        cout<<root->data<<" ";
        if(root->right)
            st.push(root->right);
             
        if(root->left)
            st.push(root->left);   
    }     
}
int main(){
    TreeNode *root=new TreeNode(1);
    TreeNode *n1=new TreeNode(2);
    root->left=n1;
    TreeNode *n2=new TreeNode(3);
    root->right=n2;
    TreeNode *n11=new TreeNode(4);
    n1->left=n11;
    TreeNode *n12=new TreeNode(5);
    n1->right=n12;
    TreeNode *n21=new TreeNode(6);
    n2->left=n21;
    TreeNode *n22=new TreeNode(7);
    n2->right=n22;
    preorder(root);
    cout<<endl;
    preorderL(root);
    return 0;
}
