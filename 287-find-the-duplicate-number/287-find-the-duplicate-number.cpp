class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=nums[0],h=nums[0];
        do{
            l=nums[l];
            h=nums[nums[h]];
        }
        while(l!=h);
            l=nums[0];
        
        while(l!=h){
            l=nums[l];
            h=nums[h];
        }
        return l;
    }
};