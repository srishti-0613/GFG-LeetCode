class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    if (digits[0]==0) {
digits[0]+=1;
return digits;}
    int  n= digits.size()-1;
       while(digits[n]==9 ){ 
          digits[n]=0;
          if(n==0)break;
           n--;
       }
      if(digits[0]==0)
      {
          vector<int>v(digits.size()+1,0);
          v[0]=1;
          return v;
      }
        digits[n]+= 1;
      return digits;
  
    }
};