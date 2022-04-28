class Solution {
public:
    int mySqrt(int x) {
      int n;
        for(long long i=1;i*i>n;i++){
            if(i*i==x) return i;
            if(i*i>x) return i-1;
        }
        return n;
    }
};