class Solution {
public:
    
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int heightleft = (root->left);
        int heightright = (root->right);
        return 1+max(heightleft,heightright);
    }
    
    
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};
