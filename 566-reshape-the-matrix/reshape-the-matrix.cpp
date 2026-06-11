class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        vector<vector<int>>res;
        vector<int>row;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                row.push_back(mat[i][j]);
                if(row.size()==c){
                    res.push_back(row);
                    row.clear();
                }
            }
        }
        return res;
    }
};