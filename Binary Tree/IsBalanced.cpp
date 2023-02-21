class Solution{
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
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root==NULL){
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=abs(height(root->left)-height(root->right))<=1;
        if(left && right && diff){
            return true;
        }
        else{
            return false;
        }
    }
};
//Optimized solution
/*
pair<bool,int> IsBalancedFast(Node* root){
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    pair <int,int> left = IsBalancedFast(root->left);
    pair <int,int> right = IsBalancedFast(root->right);

    bool leftAns=left.first;
    bool rightAns=right.first;
    bool diff=abs(left.second-right.second) <= 1;

    pair<int,int> ans;
    ans.second=max(left.second,right.second)+10;
    if(leftAns && rightAns && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;
}
bool IsBalanced(Node* root){
    return IsBalancedFast(root).first;
}
*/
