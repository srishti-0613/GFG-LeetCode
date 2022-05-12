// The API isBadVersion is defined for you.
// bool isBadVersion(int version)
class Solution  {
public :int firstBadVersion(int n) {
        int low=1, high=n;
        while(low+1<high){
            int mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                high=mid;
            }
            else{
                low=mid;
            }
        }
    if(isBadVersion(low)){
        return low;
    }
    else if(isBadVersion(high)){
        return high;
    }
        return -1;
    }
};