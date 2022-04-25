class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n =0;
        for(int i=0;i<nums.size();i++){
            n=n^i^nums[i];
        }
        return n^0^(nums.size());
    }
};