class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        
        int left = (root->left);
        int right = (root->right);
        
        return 1+max(left,right);
    }
    

    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        
        int root_dia = height(root->left)+height(root->right);
        int left_dia = diameterOfBinaryTree(root->left);
        int right_dia = diameterOfBinaryTree(root->right);
        
        
        return max(root_dia,max(left_dia,right_dia));
        
    }
};

//Another approach using pair of height and dia, reduces calls
