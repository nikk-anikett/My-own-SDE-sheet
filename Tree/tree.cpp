 #include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*>children; 
    TreeNode(T data){
        this->data=data;
    }
};

// ---------INPUT--------- 
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root= new TreeNode<int>(rootData);

    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size()!=0){
        TreeNode<int> *front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter num of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child =new TreeNode<int> (childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}


TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data : "<<endl;
    cin>>rootData;
    TreeNode<int>* root =new TreeNode<int>(rootData);
    
    int n;
    cout<<"Enter num of children of "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int> *child=takeInput();
        root->children.push_back(child);
    }
    return root;
}
int height(TreeNode<int>* root,int maxn){
    if(root==NULL){
        return maxn+1; 
    }
    int cnt=0;
    for (int i = 0; i < root->children.size(); i++)
    {
        cnt+=height(root->children[i],maxn);
        maxn=max(maxn,cnt);
    } 
}
int count(TreeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        
    }
    return ans;   
}
void print(TreeNode<int>* root){
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
    }
}
void print2(TreeNode<int>* root){

    if(root==NULL)  //edge case
        return;
    cout<<root->data<<":";
    int cnt=0;
    for (int i = 0; i < root->children.size(); i++){
        cout<<root->children[i]->data<<",";
        cnt++; 
    }
    cout<<endl;
    for (int i = 0; i < root->children.size(); i++){
        cout<<"count is: "<<cnt<<endl;
        cnt=0;
        print(root->children[i]);
    }
}
void printlevelwise(TreeNode<int>* root){
    

}
int main(){
    TreeNode<int>* root=new TreeNode<int>(1);
    TreeNode<int>* node1=new TreeNode<int>(2);
    TreeNode<int>* node2=new TreeNode<int>(3);
    TreeNode<int>* node3=new TreeNode<int>(4);
    TreeNode<int>* node11=new TreeNode<int>(4);
    TreeNode<int>* node12=new TreeNode<int>(5);
    TreeNode<int>* node111=new TreeNode<int>(7);
    TreeNode<int>* node1111=new TreeNode<int>(9);
    root->children.push_back(node1);
    root->children.push_back(node2);
    root->children.push_back(node3);
    node1->children.push_back(node11);
    node1->children.push_back(node12);
    node11->children.push_back(node111);
    node111->children.push_back(node1111);
    // TreeNode<int>* root=takeInputLevelWise();
    // print2(root);
    // cout<<endl;
    // int max=0;
    // cout<<height(root,0)<<endl;
    // cout<<count(root)<<endl;



    printlevelwise(root);
}
