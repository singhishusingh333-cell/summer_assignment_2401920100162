class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        if(source.size()!=target.size()){
            return false;
        }
        long long sum1=0;
        long long sum2=0;
        for(long long i=0;i<source.size();i++){
            sum1=sum1+source[i];
            sum2=sum2+target[i];
        }
        if(sum1==sum2){
            return true;
        }
        return false;
    }
};