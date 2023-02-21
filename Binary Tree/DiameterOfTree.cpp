class Solution {
  public:
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        return ans;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        if(root==NULL){
            return 0;
        }
        int opt1=diameter(root->left);
        int opt2=diameter(root->left);
        int opt3=height(root->left)+height(root->right)+1;
        
        int ans=max(opt1,max(opt2,opt3));
        return ans;
    }
};
/*
pair <int,int> diameterFast(Node* root){
    if(root==NULL){
        pair<int,int> p= make_pair(0,0);
    }
    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second;

    pair<int,int> ans;
    ans.first=max(op1,(op2,op3));
    ans.second=max(left.second,right.second);
    return ans;
}
int diameter(Node* root){
    return diameterFast(root).first;
}
*/