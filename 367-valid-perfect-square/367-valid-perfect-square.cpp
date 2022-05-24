class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int l=1;
        long long int h=num;
        while(l<=h){
        long long int m=(l+h)/2;
        
            if(m*m==num) return true;
            else if (m*m<num) l=m+1;
            else{ h=m-1;}
        }
        return false;
    }
};
 