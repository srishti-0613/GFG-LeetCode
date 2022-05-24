class Solution {
public:
    bool judgeSquareSum(int c) {
    if(c==1) return true;
    long l=0,h=sqrt(c) ;
        while(l<=h){
            if(l*l+h*h == c) return true;
            else if(l*l+h*h < c) l++;
            else{
                h--;
            }
        }
        return false;
    }
};