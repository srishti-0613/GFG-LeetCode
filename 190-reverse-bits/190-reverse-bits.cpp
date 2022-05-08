class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      
      uint32_t rev=0;
      for(int i=1;i<=32;i++) {
          rev=rev<<1;
          if((n&1)==1)
          rev++;
          n=n>>1;
      }  
        return rev;
    }
};