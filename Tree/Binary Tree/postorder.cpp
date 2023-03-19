
// LFC

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

void postorder(TreeNode *root){
    if(root == NULL){
        return;
    }   
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void postOrderTrav(TreeNode* root){
    if(root==NULL)
        return;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        cout<<root->data<<" ";
       
        if(root->left)
            st.push(root->left);  

        if(root->right)
            st.push(root->right);
              
    }     
}

// vector < int > postOrderTrav(TreeNode * curr) {
//     vector < int > ans;
//     if (curr == NULL) 
//         return ans;
//     stack <TreeNode*> s1;
//     s1.push(curr);
//     while (!s1.empty()) {
//         curr = s1.top();
//         s1.pop();
//         ans.push_back(curr->data);
//         if (curr -> left != NULL)
//         s1.push(curr -> left);
//         if (curr -> right != NULL)
//         s1.push(curr -> right);
//     }
//     reverse(begin(ans),end(ans));
//     return ans;
// }

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
    postorder(root);
    cout<<endl;
    postOrderTrav(root);
    // for(int i=0;i<ans.size();i++)
        // cout<<ans[i]<<" ";
    return 0;
}
