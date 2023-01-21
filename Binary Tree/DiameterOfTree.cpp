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