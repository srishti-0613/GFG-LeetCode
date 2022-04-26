class Solution {
public:
    int reverse(int x) {
      int rev=0;
       
        while(x!=0){
            if(rev + (x%10) /10 > INT_MAX /10 || rev + (x%10)/10 < INT_MIN /10) return 0;
            rev=rev*10+x%10;
            x=x/10;
        }
        return rev;
    }
};