class Solution {
public:
    
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int heightleft = 1+height(root->left);
        int heightright = 1+height(root->right);
        return max(heightleft,heightright);
    }
    
    
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};
