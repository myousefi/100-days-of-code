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
// Note that height of [3,9,20,null,null,15,7] is 3. Acc to book 2, but online questions, CN vids, its 3 only  
