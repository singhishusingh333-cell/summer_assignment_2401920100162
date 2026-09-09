class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high = piles[0];
        for (int i = 1; i < piles.size(); i++) {
            if (piles[i] > high) {
                high = piles[i];
            }
        }
        
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hour=0;
            for(int i=0;i<piles.size();i++){
                hour += (piles[i] + mid - 1) / mid;//imp
            }
            if(hour<=h){
                high=mid-1;//here we will try to find out minimum
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};