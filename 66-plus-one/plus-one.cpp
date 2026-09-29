class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n= digits.size();
      // apply back loop becouse sum opretion can be parform at the end 
      for(int i=n-1; i>=0; i--){
        if (digits[i]<9){
            // if any position value is n<9 then increment the value and return the digits an find the ans
            digits[i] = digits[i]+1;
            return digits;
        }
        else{
            digits[i]=0;
        }
      }
      // if any case all value is 9 like 99,999,9999 then all position change to the [0]and insert value 1 in the begine like 100,1000,10000
      digits.insert(digits.begin(),1);
      return digits;
    }
};