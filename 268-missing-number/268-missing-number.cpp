class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n =0;
        int x=nums.size();
        for(int i=0;i<x;i++){
            n=n^i^nums[i];
        }
        return n^0^x;
    }
};