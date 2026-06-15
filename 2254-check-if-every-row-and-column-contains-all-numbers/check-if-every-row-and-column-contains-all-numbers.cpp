class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            map<int,int>mp;
            for(int j=0;j<n;j++){
                mp[matrix[i][j]]++;
            }
            for(int i=1;i<=n;i++){
                if(mp[i]!=1){
                    return false;
                }
            }
        }       
        for(int i=0;i<n;i++){
            map<int,int>mp;
            for(int j=0;j<n;j++){
                mp[matrix[j][i]]++;
            }
            for(int i=1;i<=n;i++){
                if(mp[i]!=1){
                    return false;
                }
            }
        }       
        return true; 
    }
};