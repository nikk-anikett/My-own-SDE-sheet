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
void inorder(TreeNode *root){
    if(root == NULL){
        return;
    }   
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
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
    inorder(root);
    cout<<endl;
    return 0;
}
