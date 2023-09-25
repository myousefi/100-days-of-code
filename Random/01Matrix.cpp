class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        if(rows==0) return mat;
        int cols = mat[0].size();
        vector<vector<int>> ans(rows,vector<int>(cols,INT_MAX-1000)); //intmax - 100
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]==0) ans[i][j] = 0;
                else{
                    if(j>=1){
                        ans[i][j] = min(ans[i][j],1+ans[i][j-1]);
                    }
                    if(i>=1){
                        ans[i][j] = min(ans[i][j],1+ans[i-1][j]);
                    }
                    
                }
            }
        }
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=0;j--){
                if(j+1<=cols-1){
                    ans[i][j] = min(ans[i][j], 1+ans[i][j+1]);
                }
                if(i+1<=rows-1){
                    ans[i][j] = min(ans[i][j], 1+ans[i+1][j]);
                }
                
            }
        }
        return ans;
    }
};
